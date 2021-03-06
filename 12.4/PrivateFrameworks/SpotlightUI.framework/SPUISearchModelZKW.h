//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/SPUISearchModel.h>

@class NSObject, SPZKWSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel
{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    _Bool _shouldCacheResults;
    _Bool _newQuery;
    SPZKWSession *_session;
}

@property(retain, nonatomic) SPZKWSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)updateWithQueryContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

