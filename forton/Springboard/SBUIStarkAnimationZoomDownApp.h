/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class UIView, SBAlert;

__attribute__((visibility("hidden")))
@interface SBUIStarkAnimationZoomDownApp : SBUIStarkScreenAnimationController {
	SBAlert* _alertImpersonator;
	UIView* _viewToAnimate;
}
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(double)animationDelay;
-(double)animationStartTime;
-(double)animationDuration;
-(void)_prepareAnimation;
-(id)appSettings;
-(BOOL)prefersLayerHostSnapshot;
-(void)dealloc;
-(id)initWithDeactivatingApp:(id)deactivatingApp withAlertImpersonator:(id)alertImpersonator starkScreenController:(id)controller;
-(id)initWithDeactivatingApp:(id)deactivatingApp starkScreenController:(id)controller;
@end

