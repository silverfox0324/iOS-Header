//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController : MKTransitSectionController
{
    NSArray *_inactiveLines;
}

- (void).cxx_destruct;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (id)_pagingFilter;
@property(readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;
- (id)init;

@end

