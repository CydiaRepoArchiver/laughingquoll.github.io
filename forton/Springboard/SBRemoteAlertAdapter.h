/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertAdapter.h"
#import "_SBRemoteAlertHostViewControllerDelegate.h"

@class NSString, _SBRemoteAlertHostViewController, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {
	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	NSString* _impersonatedApplicationBundleID;
	BOOL _activated;
	BOOL _dismissWithHomeButton;
	BOOL _userRequestedHomeButtonDismissal;
	int _desiredButtonEvents;
	BOOL _wantsWallpaperTunnel;
	BOOL _hasTranslucentBackground;
	int _requestedBackgroundStyle;
	BOOL _allowsAlertStacking;
	int _dismissalAnimationStyle;
	BOOL _disableFadeInAnimation;
	NSMutableSet* _idleTimerDisabledReasons;
	double _requestedAutoLockTime;
	BOOL _hasCustomStatusBarStyle;
	int _customStatusBarStyle;
	int _desiredStatusBarStyleOverrides;
	BOOL _wantsToShowStatusBar;
	BOOL _suppressesSiri;
	BOOL _dismissOnUILock;
	int _desiredLaunchingInterfaceOrientation;
	BOOL _dontCancelStatusBarStyleOverrides;
	id _lockUIAndDismissActions;
	id _clientActivationHandler;
	id _clientDeactivationHandler;
	BOOL _beingPresentedObscured;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isBeingPresentedObscured) BOOL beingPresentedObscured;
@property(readonly, assign, nonatomic) NSString* serviceBundleIdentifier;
@property(readonly, assign, nonatomic) BOOL disablesFadeInAnimation;
@property(readonly, assign, nonatomic) BOOL dismissOnUILock;
@property(assign, nonatomic) int requestedBackgroundStyle;
@property(readonly, assign, nonatomic) BOOL wantsWallpaperTunnel;
@property(readonly, assign, nonatomic) BOOL userRequestedHomeButtonDismissal;
@property(readonly, assign, nonatomic) int dismissalAnimationStyle;
+(void)requestRemoteViewService:(id)service options:(id)options completion:(id)completion;
-(BOOL)isRemote;
-(BOOL)matchesInCallUIService;
-(BOOL)matchesAnyInCallService;
-(BOOL)matchesRemoteAlertService:(id)service options:(id)options;
-(void)remoteAlertDidTerminateWithError:(id)remoteAlert;
-(void)remoteAlertWantsToLockUIAndDismiss;
-(void)remoteAlertWantstoSetSupportedInterfaceOrientationOverride:(unsigned)override;
-(void)remoteAlertWantsToDisableFadeInAnimation:(BOOL)animation;
-(void)remoteAlertWantsToDismissOnUILock:(BOOL)dismissOnUILock;
-(void)remoteAlertWantsToSetStatusBarHidden:(BOOL)setStatusBarHidden withDuration:(double)duration;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)setAutoLockDuration;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(BOOL)setIdleTimerDisabled forReason:(id)reason;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)setDesiredStatusBarStyleOverrides;
-(void)remoteAlertWantstoSetDismissalAnimationStyle:(int)style;
-(void)remoteAlertWantsToAllowAlertStacking:(BOOL)allowAlertStacking;
-(void)remoteAlertWantsMenuButtonDismissal:(BOOL)dismissal;
-(void)remoteAlertWantsToSetBackgroundStyle:(int)setBackgroundStyle withDuration:(double)duration;
-(void)remoteAlertWantsWallpaperTunnelActive:(BOOL)active;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)updateAllowedHardwareButtonEvents;
-(void)remoteAlertWantsToAllowBanners:(BOOL)allowBanners;
-(void)_setSuppressesSiri:(BOOL)siri;
-(void)_setShouldDisableFadeInAnimation:(BOOL)_set;
-(void)_setCustomStatusBarStyle:(int)style;
-(void)_setHasTranslucentBackground:(BOOL)background;
-(void)_setLaunchingInterfaceOrientation:(int)orientation;
-(void)_setDismissalAnimationStyle:(int)style;
-(void)_setWantsWallpaperTunnel:(BOOL)tunnel immediately:(BOOL)immediately;
-(void)_setImpersonatedApplicationBundleID:(id)anId;
-(void)_setDismissWithHomeButton:(BOOL)homeButton;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(int)interfaceOrientationForActivation;
-(BOOL)showsSpringBoardStatusBar;
-(int)statusBarStyleOverridesToCancel;
-(int)statusBarStyle;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(BOOL)hasTranslucentBackground;
-(BOOL)suppressesSiri;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesNotificationCenter;
-(void)handleDoubleHeightStatusBarTap;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleMenuButtonTap;
-(double)autoLockTime;
-(void)deactivate;
-(void)activate;
-(void)setActivationHandler:(id)handler deactivationHandler:(id)handler2;
-(void)setLockUIAndDismissActions:(id)actions;
-(void)noteActivatedForCustomReason:(id)customReason;
-(void)noteShouldStopDisablingStatusBarOverrides;
-(id)_impersonatesApplicationWithBundleID;
-(void)_cleanupIdleTimerDisabledReasons;
-(void)dealloc;
-(id)initWithViewController:(id)viewController;
-(id)_initWithRemoteAlertHostViewController:(id)remoteAlertHostViewController;
@end

