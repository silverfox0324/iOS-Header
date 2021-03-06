//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSString;

@interface FinishDownloadResponse : NSObject <NSCopying>
{
    long long _downloadID;
    long long _jobID;
    long long _mediaAssetIdentifier;
    long long _assetBlockedReason;
    NSError *_error;
    NSString *_mediaAssetInstallPath;
    long long _result;
}

@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *mediaAssetInstallPath; // @synthesize mediaAssetInstallPath=_mediaAssetInstallPath;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long assetBlockedReason; // @synthesize assetBlockedReason=_assetBlockedReason;
@property(nonatomic) long long mediaAssetIdentifier; // @synthesize mediaAssetIdentifier=_mediaAssetIdentifier;
@property(nonatomic) long long jobID; // @synthesize jobID=_jobID;
@property(nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

