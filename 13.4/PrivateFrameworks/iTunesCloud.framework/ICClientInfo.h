//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSString *_processName;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    NSString *_bagProfile;
    NSString *_bagProfileVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultInfo;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_clientInfoCopyWithClass:(Class)arg1;
@property(readonly, copy, nonatomic) NSString *bagProfileVersion;
@property(readonly, copy, nonatomic) NSString *bagProfile;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSystemApplicationType:(long long)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

