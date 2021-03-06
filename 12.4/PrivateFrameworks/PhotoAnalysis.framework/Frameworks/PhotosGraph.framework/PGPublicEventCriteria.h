//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PGPublicEventCriteria : NSObject
{
    _Bool _allowsExpandingTimeAttendance;
    NSString *_eventCategory;
    double _minimumTimeAttendance;
    double _maximumDistance;
    long long _minimumAttendance;
    NSArray *_disambiguationCriteria;
    NSArray *_highConfidenceCriteria;
    NSArray *_prohibitedCriteria;
}

@property(retain, nonatomic) NSArray *prohibitedCriteria; // @synthesize prohibitedCriteria=_prohibitedCriteria;
@property(retain, nonatomic) NSArray *highConfidenceCriteria; // @synthesize highConfidenceCriteria=_highConfidenceCriteria;
@property(retain, nonatomic) NSArray *disambiguationCriteria; // @synthesize disambiguationCriteria=_disambiguationCriteria;
@property(nonatomic) _Bool allowsExpandingTimeAttendance; // @synthesize allowsExpandingTimeAttendance=_allowsExpandingTimeAttendance;
@property(nonatomic) long long minimumAttendance; // @synthesize minimumAttendance=_minimumAttendance;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) double minimumTimeAttendance; // @synthesize minimumTimeAttendance=_minimumTimeAttendance;
@property(retain, nonatomic) NSString *eventCategory; // @synthesize eventCategory=_eventCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasMinimumAttendance;
- (_Bool)isMatchingEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(_Bool *)arg3 matchingDistance:(double *)arg4;
- (_Bool)_isMatchingMeaningDisambiguationForEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(_Bool *)arg3;
- (_Bool)_hasSufficientTimeOverlapForEvent:(id)arg1 matchingOptions:(id)arg2;

@end

