/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSArray, NSDictionary, _UILegibilitySettings, NSMutableDictionary, SBScrollViewLayoutInfos, SBScrollViewItemWrapper;
@protocol SBAppSwitcherPeopleScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleScrollView : XXUnknownSuperclass {
	NSArray* _wrappers;
	NSDictionary* _wrappersToViews;
	NSDictionary* _sectionsToPlaceholders;
	CGPoint _closingGestureBeginningContentOffset;
	SBScrollViewLayoutInfos* _interactiveClosingGestureBeginningLayout;
	SBScrollViewLayoutInfos* _interactiveClosingGestureTargetLayout;
	SBScrollViewLayoutInfos* _interactiveClosingGestureInterpolatedLayout;
	NSMutableDictionary* _sectionLabels;
	SBScrollViewLayoutInfos* _cachedLayoutInfos;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _lastLayoutWasCompact;
	SBScrollViewItemWrapper* _expandedItemWrapper;
}
@property(retain, nonatomic) SBScrollViewLayoutInfos* cachedLayoutInfos;
@property(assign, nonatomic) id<SBAppSwitcherPeopleScrollViewDelegate> delegate;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(retain, nonatomic) SBScrollViewItemWrapper* expandedItemWrapper;
-(id)_labelImageParametersForLabelString:(id)labelString;
-(id)_labelFont;
-(id)layoutInfosWithExpandedItemWrapper:(id)expandedItemWrapper;
-(void)finishInteractiveClosingOfItem;
-(void)cancelInteractiveClosingOfItem;
-(void)updateInteractiveClosingWithProgress:(float)progress;
-(void)beginInteractiveClosingOfExpandedItem;
-(void)collapseExpandedItem;
-(void)expandItemWrapper:(id)wrapper;
-(CGRect)layoutFrameForItemWrapper:(id)itemWrapper;
-(void)applyContentSizeForLayoutInfos:(id)layoutInfos;
-(void)applySubviewFramesForLayoutInfos:(id)layoutInfos;
-(void)updateDataVisibleOnly:(BOOL)only animated:(BOOL)animated;
-(void)removeContent;
-(id)_indexPathsToViewsForViews:(id)views;
-(id)_indexPathForItem:(id)item;
-(void)layoutSubviews;
-(float)_interItemSpacing;
-(id)_placeholderViewForSection:(int)section;
-(int)_sectionForPlaceholderView:(id)placeholderView;
-(void)_layoutSectionLabels;
-(void)_addOrRemoveSectionLabels;
-(id)_labelForSection:(unsigned)section;
-(float)monogramSize;
-(BOOL)useVerticallyCompactLayoutSize;
-(CGPoint)presentationOffset;
-(void)setContentOffset:(CGPoint)offset;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

