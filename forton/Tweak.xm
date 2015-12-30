static BOOL SCisEnabled = YES; // Default value
static BOOL SCEmergency = NO; // Default value
static BOOL SCCancel = NO; // Default value
static BOOL SCPassword = NO;
static BOOL SCNoCamera = NO;
static BOOL SCPasscodeLock = NO;
BOOL LSBlur;
BOOL LSTint;
BOOL LSBounce;
BOOL LSRotate;
BOOL SlowAnim;
static NSString* SCtext = nil;
#import "substrate.h"
#import <objc/runtime.h>

%hook SBLockScreenView
- (void)setCustomSlideToUnlockText:(id)arg1
{
    if(SCtext && SCisEnabled)
    {
        arg1 = SCtext;
    }
    %orig(arg1);
}
%end

static void loadPrefs()
{
    NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.laughingquoll.fortonprefs.plist"];
    if(prefs)
    {
        CFPreferencesAppSynchronize(CFSTR("com.laughingquoll.fortonprefs"));
        NSNumber *tempVal;
        tempVal = (NSNumber *)CFPreferencesCopyAppValue(CFSTR("SCLockscreenBlur"), CFSTR("com.laughingquoll.fortonprefs"));
        LSBlur = !tempVal ? YES : [tempVal boolValue];
        tempVal = (NSNumber *)CFPreferencesCopyAppValue(CFSTR("SCLockscreenTint"), CFSTR("com.laughingquoll.fortonprefs"));
        LSTint = !tempVal ? YES : [tempVal boolValue];
        tempVal = (NSNumber *)CFPreferencesCopyAppValue(CFSTR("SCLockscreenRotate"), CFSTR("com.laughingquoll.fortonprefs"));
        LSRotate = !tempVal ? YES : [tempVal boolValue];
        tempVal = (NSNumber *)CFPreferencesCopyAppValue(CFSTR("SCLockscreenBounce"), CFSTR("com.laughingquoll.fortonprefs"));
        LSBounce = !tempVal ? YES : [tempVal boolValue];
        tempVal = (NSNumber *)CFPreferencesCopyAppValue(CFSTR("SCFastAnims"), CFSTR("com.laughingquoll.fortonprefs"));
        SlowAnim = !tempVal ? YES : [tempVal boolValue];
        SCisEnabled = ( [prefs objectForKey:@"SCisEnabled"] ? [[prefs objectForKey:@"SCisEnabled"] boolValue] : SCisEnabled );
        SCEmergency = ( [prefs objectForKey:@"SCEmergency"] ? [[prefs objectForKey:@"SCEmergency"] boolValue] : SCEmergency );
        SCCancel = ( [prefs objectForKey:@"SCCancel"] ? [[prefs objectForKey:@"SCCancel"] boolValue] : SCCancel );
        SCPasscodeLock = ( [prefs objectForKey:@"SCPasscodeLock"] ? [[prefs objectForKey:@"SCPasscodeLock"] boolValue] : SCCancel );
        SCNoCamera = ( [prefs objectForKey:@"SCNoCamera"] ? [[prefs objectForKey:@"SCNoCamera"] boolValue] : SCNoCamera );
        SCPassword = ( [prefs objectForKey:@"SCPassword"] ? [[prefs objectForKey:@"SCPassword"] boolValue] : SCPassword );
        SCtext = ( [prefs objectForKey:@"SCtext"] ? [prefs objectForKey:@"SCtext"] : SCtext );
        [SCtext retain];
    }
    [prefs release];
}

%ctor 
{
    CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)loadPrefs, CFSTR("com.laughingquoll.fortonprefs/settingschanged"), NULL, CFNotificationSuspensionBehaviorCoalesce);
    loadPrefs();
}
%hook SBUIPasscodeLockViewWithKeypad
- (id)statusTitleView {
     
    if (SCisEnabled && SCPassword) {
        UILabel *label = MSHookIvar<UILabel *>(self, "_statusTitleView");
        label.alpha = 0.0;  
    }
    
    return %orig;
}
%end
%hook SBUIPasscodeLockNumberPad

-(void)layoutSubviews {
  
}
-(void)_configureAdditionalButtons{
     
    %orig;
     
    
    if (SCisEnabled && SCCancel) {
        
        UIView *cancelButton = MSHookIvar<UIView *>(self, "_cancelButton");
        cancelButton.alpha = 0.0;
        
        UIView *backspaceButton = MSHookIvar<UIView *>(self, "_backspaceButton");
        backspaceButton.alpha = 0.0;
        
    }

    if (SCisEnabled && SCEmergency) {
        
        UIView *emergencyCallButton = MSHookIvar<UIView *>(self, "_emergencyCallButton");
        emergencyCallButton.alpha = 0.0;
        
    }

}

%end

%hook SBLockOverlayStyleProperties
-(CGFloat) blurRadius
{
    return LSBlur ? 0 : %orig;
}
%end
%hook SBLockOverlayStyleProperties   
-(CGFloat) tintAlpha
{
    return LSTint ? 0 : %orig;
}
%end
%hook SBLockScreenViewController
-(bool)_forcesPortraitOrientation
{
    return LSRotate ? NO : %orig;
}
-(bool) shouldAutorotateToInterfaceOrientation:(long long)arg1
{
    return LSRotate ? NO : %orig;
}
%end

@interface SBDeviceLockController : NSObject
+ (instancetype)sharedController;
- (void)_clearBlockedState;
@end

@interface SBAwayController : NSObject
- (void)_clearBlockedState;
- (void)clearBlockedStateAndUpdateUI:(BOOL)update;
@end

%hook SBAwayController
- (void)_finishedUnlockAttemptWithStatus:(BOOL)status {
    if (!status) {
        if ([self respondsToSelector:@selector(clearBlockedStateAndUpdateUI:)]) {
            [self clearBlockedStateAndUpdateUI:YES];
        } else if ([self respondsToSelector:@selector(_clearBlockedState)]) {
            [self _clearBlockedState];
        } else {
            [[%c(SBDeviceLockController) sharedController] _clearBlockedState];
        }
    }
    %orig;
}

%end
%hook SBFAnimationFactorySettings
-(void) setSlowAnimations:(bool)arg1
{
    return SlowAnim ? %orig(false) : %orig;
}
%end
%hook SBLockScreenView
- (CGFloat)hintDisplacement
{
     return LSBounce ? NO : %orig;
}
%end