/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIControlCenterButtonDelegate.h"
#import "_UISettingsKeyObserver.h"

@class SBUIControlCenterButton, SBUIControlCenterLabel, UIView, NSString, UIVisualEffect, UIVisualEffectView, UIFont;

__attribute__((visibility("hidden")))
@interface SBCCButtonLikeSectionView : XXUnknownSuperclass <SBUIControlCenterButtonDelegate, _UISettingsKeyObserver> {
	UIVisualEffect* _normalStateEffect;
	UIVisualEffect* _highlightedStateEffect;
	UIVisualEffectView* _vibrantDarkenLayer;
	UIView* _tintingDarkenLayer;
	SBUIControlCenterButton* _button;
	SBUIControlCenterLabel* _label;
	BOOL _showingMenu;
	unsigned _roundCorners;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isShowingMenu) BOOL showingMenu;
@property(assign, nonatomic) unsigned roundCorners;
@property(retain, nonatomic) UIFont* font;
-(void)_updateBackgroundForStateChange;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)button:(id)button didChangeState:(int)state;
-(void)buttonTapped:(id)tapped;
-(void)setSelected:(BOOL)selected;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setEnabled:(BOOL)enabled;
-(void)layoutSubviews;
-(void)setImage:(id)image;
-(void)setText:(id)text;
-(void)setNumberOfLines:(int)lines;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(void)_updateEffects;
-(id)_backgroundImageWithRoundCorners:(unsigned)roundCorners;
-(BOOL)_shouldUseButtonAppearance;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

