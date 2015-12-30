/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITapGestureRecognizer, UILabel, NSArray, UIImageView, UIButton;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	float _titleAscender;
	float _titleDescender;
	UIImageView* _imageView;
	CGSize _imageSize;
	UILabel* _messageLabel;
	float _messageAscender;
	float _messageDescender;
	UIButton* _backToOEMButton;
	UITapGestureRecognizer* _backToOEMGestureRecognizer;
	NSArray* _baselineSeparations;
}
@property(readonly, retain, nonatomic) UIButton* backToOEMButton;
@property(readonly, retain, nonatomic) UIImageView* imageView;
@property(readonly, retain, nonatomic) UILabel* messageLabel;
@property(readonly, retain, nonatomic) UILabel* titleLabel;
-(void)_sizeMessageToFitInFrame:(CGRect)frame;
-(id)_messageFontOfSize:(float)size;
-(void)_sizeTitleToFitInFrame:(CGRect)frame;
-(id)_titleFontOfSize:(float)size;
-(void)layoutSubviews;
-(void)_backToOEM;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame title:(id)title image:(id)image message:(id)message baselineSeparations:(id)separations;
@end

