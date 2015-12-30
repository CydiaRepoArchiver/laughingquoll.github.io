/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"
#import "SBIconObserver.h"
#import "SBReusableView.h"

@class SBIconImageCrossfadeView, SBIconLabelView, SBCloseBoxView, SBIcon, NSString, _UILegibilitySettings, UIView, NSTimer, SBIconImageView, SBFParallaxSettings, SBFolderIconBackgroundView;
@protocol SBIconViewDelegate, SBIconViewObserver, SBIconAccessoryView;

__attribute__((visibility("hidden")))
@interface SBIconView : XXUnknownSuperclass <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {
	SBIcon* _icon;
	int _iconLocation;
	UIView* _currentImageView;
	SBIconImageView* _iconImageView;
	SBIconImageCrossfadeView* _crossfadeView;
	UIView<SBIconAccessoryView>* _accessoryView;
	SBCloseBoxView* _closeBox;
	SBFParallaxSettings* _closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	SBIconLabelView* _labelView;
	UIView<SBReusableView>* _labelAccessoryView;
	int _currentLabelAccessoryType;
	SBFolderIconBackgroundView* _dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideLabelAccessoryView;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	CGRect _visibleImageRect;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	_UILegibilitySettings* _legibilitySettings;
	float _iconImageAlpha;
	float _iconAccessoryAlpha;
	float _iconLabelAlpha;
	CGPoint _wallpaperRelativeImageCenter;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) CGPoint wallpaperRelativeImageCenter;
@property(readonly, assign, nonatomic) int currentLabelAccessoryType;
@property(readonly, assign, nonatomic) BOOL shouldShowLabelAccessoryView;
@property(assign, nonatomic) BOOL isEditing;
@property(assign, nonatomic) float iconLabelAlpha;
@property(assign, nonatomic) float iconAccessoryAlpha;
@property(assign, nonatomic) float iconImageAlpha;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) int location;
@property(assign, nonatomic) id<SBIconViewObserver> observer;
@property(assign, nonatomic) id<SBIconViewDelegate> delegate;
@property(retain, nonatomic) SBIcon* icon;
+(id)_jitterTransformAnimation;
+(id)_jitterPositionAnimation;
+(CGSize)maxLabelSize;
+(CGRect)_rectForLayoutMetric:(int)layoutMetric;
+(CGSize)defaultVisibleIconImageSize;
+(CGPoint)defaultIconImageCenter;
+(CGSize)defaultIconImageSize;
+(float)_labelHeight;
+(CGSize)defaultIconSize;
+(float)labelAccessoryViewRightMargin;
+(BOOL)canShowLabelAccessoryView;
+(int)_defaultIconFormat;
-(void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(void)_backgroundContrastDidChange:(id)_backgroundContrast;
-(void)_updateProgressAnimated:(BOOL)animated;
-(void)prepareForReuse;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(BOOL)_delegateTapAllowed;
-(void)_delegateTouchEnded:(BOOL)ended;
-(UIEdgeInsets)snapshotEdgeInsets;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)_closeBoxTapped;
-(BOOL)_isShowingCloseBox;
-(void)_updateCloseBoxAnimated:(BOOL)animated;
-(void)_applyEditingStateAnimated:(BOOL)animated;
-(void)setIsEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setTouchDownInIcon:(BOOL)icon;
-(BOOL)isTouchDownInIcon;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)didMoveToWindow;
-(void)cancelLongPressTimer;
-(void)longPressTimerFired;
-(void)cleanupAfterImageCrossfade;
-(void)setImageCrossfadeMorphFraction:(float)fraction totalScale:(float)scale;
-(void)setImageCrossfadeFadeFraction:(float)fraction;
-(void)prepareToCrossfadeImageWithView:(id)view maskCorners:(BOOL)corners trueCrossfade:(BOOL)crossfade anchorPoint:(CGPoint)point;
-(void)prepareToCrossfadeImageWithView:(id)view maskCorners:(BOOL)corners trueCrossfade:(BOOL)crossfade;
-(id)dropGlow;
-(void)removeDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(void)prepareDropGlow;
-(void)setIsOverlapping:(BOOL)overlapping;
-(BOOL)isGrabbed;
-(void)setIsGrabbed:(BOOL)grabbed;
-(double)grabDurationForEvent:(id)event;
-(BOOL)canReceiveGrabbedIcon:(id)icon;
-(void)setRefusesRecipientStatus:(BOOL)status;
-(void)setIconPosition:(CGPoint)position;
-(void)removeAllIconAnimations;
-(void)setAllowJitter:(BOOL)jitter;
-(void)_updateJitter;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned)_recursiveNotifyInteractionTintColor;
-(id)tintColor;
-(void)setFrame:(CGRect)frame;
-(BOOL)isInDock;
-(void)setHighlighted:(BOOL)highlighted;
-(BOOL)isHighlighted;
-(BOOL)allowsTapWhileEditing;
-(void)_updateBrightness;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(id)_automationID;
-(void)_createAccessoryViewIfNecessary;
-(void)_updateAccessoryViewWithAnimation:(BOOL)animation;
-(void)_updateIconImageViewAnimated:(BOOL)animated;
-(void)_updateLabelAccessoryView;
-(void)_configureLabelAccessoryViewForType:(int)type;
-(id)_legibilitySettingsWithStyle:(int)style primaryColor:(id)color;
-(id)_legibilitySettingsWithPrimaryColor:(id)primaryColor;
-(id)_legibilitySettingsWithParameters:(id)parameters;
-(void)_updateLabel;
-(id)_labelImageParameters;
-(void)invalidateLabelLayoutGeometry;
-(void)_updateAdaptiveColors;
-(void)setShouldRasterizeImageView:(BOOL)rasterizeImageView;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
-(id)_labelImage;
-(id)_iconImageView;
-(CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)visibleImageFrame;
-(CGPoint)_centerForCloseBox;
-(CGRect)_frameForAccessoryView;
-(CGRect)_frameForLabelAccessoryViewWithLabelFrame:(CGRect)labelFrame;
-(CGRect)_frameForLabel;
-(CGRect)_frameForVisibleImage;
-(float)_labelVerticalOffset;
-(CGRect)_frameForImageView;
-(void)layoutSubviews;
-(void)setLabelAccessoryViewHidden:(BOOL)hidden;
-(void)setLabelHidden:(BOOL)hidden;
-(void)_applyIconLabelAlpha:(float)alpha;
-(void)_applyIconAccessoryAlpha:(float)alpha;
-(void)_applyIconImageAlpha:(float)alpha;
-(void)setIconImageAndAccessoryAlpha:(float)alpha;
-(CGSize)iconImageVisibleSize;
-(CGPoint)iconImageCenter;
-(CGRect)iconImageFrame;
-(id)iconImageSnapshot;
-(void)swapInIcon:(id)icon;
-(void)_setIcon:(id)icon animated:(BOOL)animated;
-(void)setPaused:(BOOL)paused;
-(void)dealloc;
-(id)initWithDefaultSize;
@end

