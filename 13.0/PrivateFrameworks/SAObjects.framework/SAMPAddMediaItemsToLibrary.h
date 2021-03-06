//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand
{
}

+ (id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToLibrary;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPCollection *mediaItems;
@property(copy, nonatomic) NSString *influencedUserSharedUserId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

