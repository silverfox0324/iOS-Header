//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class URLRequestProperties;
@protocol AMSURLBagContract;

@interface URLRequest : NSObject
{
    id <AMSURLBagContract> _bagContract;
    URLRequestProperties *_requestProperties;
}

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestProperties:(id)arg1;

@end

