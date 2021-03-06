//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/WebItemProviderRegistrar-Protocol.h>

@class NSData, NSString;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<NSString> _typeIdentifier;
    struct RetainPtr<NSData> _data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)registerItemProvider:(id)arg1;
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *typeIdentifier;
- (id)initWithData:(id)arg1 type:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@property(readonly) Class superclass;

@end

