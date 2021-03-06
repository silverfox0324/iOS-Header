//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSUUID, VMVoicemailGreeting;

@protocol VMGreetingManagerXPCServer <NSObject>
- (oneway void)setGreeting:(VMVoicemailGreeting *)arg1 forAccountUUID:(NSUUID *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (oneway void)greetingForAccountUUID:(NSUUID *)arg1 reply:(void (^)(VMVoicemailGreeting *, NSError *))arg2;
- (oneway void)maximumGreetingDurationForAccountUUID:(NSUUID *)arg1 reply:(void (^)(double))arg2;
- (oneway void)isGreetingChangeSupportedForAccountUUID:(NSUUID *)arg1 reply:(void (^)(_Bool))arg2;
@end

