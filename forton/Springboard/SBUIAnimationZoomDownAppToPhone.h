/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownApp.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp {
	BOOL _usingSuperZoomImplementation;
	BOOL _fromPhoneAppToFaceTimeAppDuringCall;
}
-(void)_applicationDependencyStateChanged;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)animateZoomWithCompletion:(id)completion;
-(BOOL)_shouldZoomUsingSuperImplementation;
-(id)_animationProgressDependency;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)dealloc;
-(void)_cleanupPhonesContextHostView;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)startEffectivelyHidden endStyleRequest:(id)request endOrientation:(int)orientation;
@end

