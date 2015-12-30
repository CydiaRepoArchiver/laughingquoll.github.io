/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterSectionViewControllerDelegate.h"
#import "_UIBackdropViewObserver.h"
#import "SBControlCenterObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class SBControlCenterContainerView, UIPanGestureRecognizer, SBControlCenterSettings, NSString, UITapGestureRecognizer, NSMutableArray, SBControlCenterContentView;
@protocol SBControlCenterViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBControlCenterViewController : XXUnknownSuperclass <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver> {
	SBControlCenterContainerView* _containerView;
	SBControlCenterContentView* _contentView;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	NSMutableArray* _sectionList;
	SBControlCenterSettings* _settings;
	BOOL _presented;
	BOOL _transitioning;
	id<SBControlCenterViewControllerDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isTransitioning) BOOL transitioning;
@property(assign, nonatomic, getter=isPresented) BOOL presented;
@property(assign, nonatomic) float revealPercentage;
@property(assign, nonatomic) id<SBControlCenterViewControllerDelegate> delegate;
-(void)backdropViewDidChange:(id)backdropView;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)section:(id)section publishStatusUpdate:(id)update;
-(void)noteSectionEnabledStateDidChange:(id)noteSectionEnabledState;
-(void)sectionWantsControlCenterDismissal:(id)dismissal;
-(void)_handlePan:(id)pan;
-(void)_handleTap:(id)tap;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(id)view;
-(void)abortAnimatedTransition;
-(void)_noteControlCenterControlDidDeactivate:(id)_noteControlCenterControl;
-(void)_noteControlCenterControlDidActivate:(id)_noteControlCenterControl;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(BOOL)controlCenter withDuration:(double)duration;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(float)contentHeightForOrientation:(int)orientation;
-(void)trackChevronView:(id)view;
-(id)chevronView;
-(void)dealloc;
-(id)init;
@end

