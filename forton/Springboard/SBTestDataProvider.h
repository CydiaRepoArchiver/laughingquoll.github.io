/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBRemoteDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, BBDataProviderConnection, BBDataProviderProxy;

__attribute__((visibility("hidden")))
@interface SBTestDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
	NSMutableArray* _bulletins;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstance;
-(void)noteSectionInfoDidChange:(id)noteSectionInfo;
-(float)attachmentAspectRatioForRecordID:(id)recordID;
-(id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
-(void)receiveMessageWithName:(id)name userInfo:(id)info;
-(void)dataProviderDidLoad;
-(id)sectionParameters;
-(id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
-(id)sortDescriptors;
-(id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
-(id)sectionDisplayName;
-(id)defaultSectionInfo;
-(id)sectionIdentifier;
-(id)_bulletin;
-(void)publish;
-(id)init;
@end

