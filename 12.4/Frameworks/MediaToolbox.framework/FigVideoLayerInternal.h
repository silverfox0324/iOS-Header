//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FigVideoLayerInternal : NSObject
{
    _Bool isPresentationLayer;
    _Bool visible;
    struct OpaqueFigSimpleMutex *serializationMutex;
    NSObject<OS_dispatch_queue> *notificationSerialQueue;
}

@end

