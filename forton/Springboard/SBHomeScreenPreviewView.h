/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBFolderViewDelegate.h"

@class SBFolderView, SBIconViewMap, NSString;

__attribute__((visibility("hidden")))
@interface SBHomeScreenPreviewView : XXUnknownSuperclass <SBFolderViewDelegate> {
	SBIconViewMap* _viewMap;
	SBFolderView* _folderContent;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)cleanupPreview;
+(id)preview;
-(void)folderViewShouldBeginEditing:(id)folderView;
-(void)folderViewShouldClose:(id)folderView;
-(void)folderViewDidEndScrolling:(id)folderView;
-(void)folderViewWillBeginScrolling:(id)folderView;
-(void)folderView:(id)view currentPageIndexDidChange:(int)currentPageIndex;
-(Class)iconListViewClassForFolderView:(id)folderView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame iconController:(id)controller;
@end

