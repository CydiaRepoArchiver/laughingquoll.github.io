/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol NCInteractiveNotificationHostDelegate <NSObject>
@optional
-(void)hostViewController:(id)controller didEnable:(BOOL)enable actionAtIndex:(unsigned)index;
-(void)hostViewController:(id)controller didRequestDismissalWithContext:(id)context;
-(void)hostViewControllerDidChangePreferredContentSize:(id)hostViewController;
@end

