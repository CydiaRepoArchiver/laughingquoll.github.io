/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerObserver.h"


@protocol SBUIAnimationControllerGroupObserver <SBUIAnimationControllerObserver>
@optional
-(void)animationControllerGroup:(id)group childControllerDidFinishAnimation:(id)childController;
-(void)animationControllerGroup:(id)group childController:(id)controller willBeginAnimation:(BOOL)animation;
@end

