/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBObservingLabel : XXUnknownSuperclass {
	id _object;
	NSString* _keyPath;
}
@property(copy, nonatomic) NSString* keyPath;
@property(assign, nonatomic) id object;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)bindAttributesToObject:(id)object keyPath:(id)path;
-(void)dealloc;
@end

