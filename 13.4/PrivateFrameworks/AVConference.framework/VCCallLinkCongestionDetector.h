//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCallLinkCongestionDetector : NSObject
{
    _Bool isLinkCongested;
    double rttThreshold;
    double lossRateThreshold;
}

@property(nonatomic) _Bool isLinkCongested; // @synthesize isLinkCongested;
- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;
- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;

@end

