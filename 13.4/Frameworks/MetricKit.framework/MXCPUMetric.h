//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXCPUMetric : MXMetric
{
    NSMeasurement *_cumulativeCPUTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSMeasurement *cumulativeCPUTime; // @synthesize cumulativeCPUTime=_cumulativeCPUTime;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1;

@end

