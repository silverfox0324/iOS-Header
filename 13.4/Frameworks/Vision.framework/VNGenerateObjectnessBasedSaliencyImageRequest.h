//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNGenerateObjectnessBasedSaliencyImageRequest : VNImageBasedRequest
{
}

+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)_objectnessObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;
- (id)_detectorForRevision:(unsigned long long)arg1 getAppliedDetectorOptions:(id *)arg2 error:(id *)arg3;
- (id)_detectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;

@end

