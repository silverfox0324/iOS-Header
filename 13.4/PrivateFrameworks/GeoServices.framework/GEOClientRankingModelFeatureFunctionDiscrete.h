//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction
{
    float _valueThresholdLow;
    float _weightLow;
    float _valueThresholdHigh;
    float _weightHigh;
}

@property(readonly, nonatomic) float weightHigh; // @synthesize weightHigh=_weightHigh;
@property(readonly, nonatomic) float valueThresholdHigh; // @synthesize valueThresholdHigh=_valueThresholdHigh;
@property(readonly, nonatomic) float weightLow; // @synthesize weightLow=_weightLow;
@property(readonly, nonatomic) float valueThresholdLow; // @synthesize valueThresholdLow=_valueThresholdLow;
- (long long)functionType;
- (id)initWithValueThresholdLow:(float)arg1 weightLow:(float)arg2 valueThresholdHigh:(float)arg3 weightHigh:(float)arg4;
- (id)init;

@end

