//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFMailAccountProxy, NSArray, NSString;

@protocol MFMailAccountProxyGenerator <NSObject>
- (NSArray *)allAccountProxies;
- (NSArray *)activeAccountProxiesOriginatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
- (MFMailAccountProxy *)accountProxyContainingEmailAddress:(NSString *)arg1 includingInactive:(_Bool)arg2 originatingBundleID:(NSString *)arg3 sourceAccountManagement:(int)arg4;
- (MFMailAccountProxy *)accountProxyContainingEmailAddress:(NSString *)arg1 includingInactive:(_Bool)arg2;
- (MFMailAccountProxy *)defaultMailAccountProxyForDeliveryOriginatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
@end

