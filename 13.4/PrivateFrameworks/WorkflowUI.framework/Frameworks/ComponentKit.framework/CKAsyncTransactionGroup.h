//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject
{
    NSHashTable *_containerLayers;
}

+ (void)registerTransactionGroupAsMainRunloopObserver:(id)arg1;
+ (id)mainTransactionGroup;
- (void).cxx_destruct;
- (void)commit;
- (void)addTransactionContainer:(id)arg1;
- (id)init;

@end

