//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class FPItem, FPItemCollection, NSArray, NSDictionary, NSError;

@protocol FPItemCollectionDelegate <NSObject>
- (void)collection:(FPItemCollection *)arg1 didPerformBatchUpdateWithReplayBlock:(void (^)(void))arg2;
- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1;
- (void)collection:(FPItemCollection *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2 changes:(NSDictionary *)arg3;
- (void)collection:(FPItemCollection *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didMoveItemsFromIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (void)collection:(FPItemCollection *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collection:(FPItemCollection *)arg1 didUpdateObservedItem:(FPItem *)arg2;
- (void)collection:(FPItemCollection *)arg1 didEncounterError:(NSError *)arg2;
@end

