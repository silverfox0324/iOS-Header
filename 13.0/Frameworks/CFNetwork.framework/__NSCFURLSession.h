//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

#import <CFNetwork/__NSURLSessionTaskGroupForConfiguration-Protocol.h>

@class ConnectionContextManager, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURLSessionConfiguration, NSUUID, __CFN_SessionMetrics;
@protocol OS_dispatch_queue;

@interface __NSCFURLSession : NSURLSession <__NSURLSessionTaskGroupForConfiguration>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid_ivar;
    NSString *_tlsSessionCachePrefix;
    ConnectionContextManager *_nwContextManager;
    shared_ptr_9ad247fa _nwContext;
    NSMutableDictionary *_altSvc;
    NSMutableSet *_h2BlacklistedHosts;
    NSMutableDictionary *_coalescing;
    __CFN_SessionMetrics *_metrics;
}

- (void)set_metrics:(id)arg1;
- (id)_metrics;
- (void)set_coalescing:(id)arg1;
- (id)_coalescing;
- (void)set_h2BlacklistedHosts:(id)arg1;
- (id)_h2BlacklistedHosts;
- (void)set_altSvc:(id)arg1;
- (id)_altSvc;
- (id)_tlsSessionCachePrefix;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_9ad247fa)_nwContext;
- (void)set_tlsSessionCachePrefix:(id)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
@property(readonly, copy) NSDictionary *delegateOptions;
- (id)workQueue;
- (id)taskGroupWithConfiguration:(id)arg1;
- (id)defaultTaskGroup;
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration; // @dynamic _groupConfiguration;
@property(readonly) __weak NSURLSession *_groupSession; // @dynamic _groupSession;
- (id)_uuid;
- (_Bool)invalid;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

