//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKInteractiveChartAnnotationView, UIView;

@protocol HKInteractiveChartAnnotationViewDataSource <NSObject>
- (UIView *)columnViewForColumnAtIndex:(long long)arg1;
- (long long)numberOfColumnsForAnnotationView:(HKInteractiveChartAnnotationView *)arg1;
@end

