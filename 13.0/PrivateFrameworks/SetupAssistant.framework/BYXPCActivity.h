//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface BYXPCActivity : NSObject
{
    NSObject<OS_xpc_object> *_xpcActivity;
}

+ (id)activityWithXPCActivity:(id)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
- (void).cxx_destruct;
@property(copy, nonatomic) NSObject<OS_xpc_object> *criteria;
- (long long)state;
- (_Bool)setState:(long long)arg1;

@end

