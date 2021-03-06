//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation
{
    _DKSyncCompositeOperation *_parent;
    // Error parsing type: AB, name: _isReadyToStart
    NSHashTable *_children;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_errors;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *errors; // @synthesize errors=_errors;
- (void)cancel;
- (void)endOperation;
- (void)_shutdownOperation;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;
- (void)childOperationWasAdded:(id)arg1;
- (_Bool)isReady;
- (void)setReadyToStart:(_Bool)arg1;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

