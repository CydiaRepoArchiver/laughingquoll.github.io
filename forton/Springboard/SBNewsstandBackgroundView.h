/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SBNewsstandBackgroundView : XXUnknownSuperclass {
	NSMutableArray* _shelfViews;
	UIImageView* _overlayGradientView;
	UIView* _bottomView;
}
+(float)dockHeightForOrientation:(int)orientation;
+(float)shelfHeightForOrientation:(int)orientation;
+(float)baselineForShelfAtIndex:(unsigned)index withOrientation:(int)orientation;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

