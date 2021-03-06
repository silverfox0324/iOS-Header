//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol NSSecureCoding;

@protocol RERemoteTrainingServerInterface <NSObject>
- (void)updateRemoteAttribute:(id <NSSecureCoding>)arg1 forKey:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)performTrainingWithElements:(NSArray *)arg1 events:(NSArray *)arg2 interactions:(NSArray *)arg3 completion:(void (^)(void))arg4;
@end

