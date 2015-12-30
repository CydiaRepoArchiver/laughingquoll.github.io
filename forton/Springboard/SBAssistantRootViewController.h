/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, UIView, UIScreen;
@protocol SBUIPluginViewControllerInterface;

__attribute__((visibility("hidden")))
@interface SBAssistantRootViewController : XXUnknownSuperclass {
	UIViewController<SBUIPluginViewControllerInterface>* _assistantViewController;
	UIView* _contentView;
	UIView* _clippingView;
	UIScreen* _screen;
}
@property(retain, nonatomic) UIScreen* screen;
@property(retain, nonatomic) UIViewController<SBUIPluginViewControllerInterface>* assistantController;
@property(readonly, assign, nonatomic) UIView* contentView;
@property(readonly, assign, nonatomic) UIView* clippingView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)wantsFullScreenLayout;
-(void)loadView;
-(void)dealloc;
-(id)initWithScreen:(id)screen;
@end

