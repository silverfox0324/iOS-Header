//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorDelegate-Protocol.h>
#import <ARKit/ARTechniqueDelegate-Protocol.h>

@class ARConfiguration, ARFrame, ARFrameContext, ARImageSensor, ARParentTechnique, ARQATracer, ARRenderSyncScheduler, ARSessionMetrics, ARTechnique, ARWorldTrackingTechnique, CMMotionManager, NSArray, NSDate, NSHashTable, NSString;
@protocol ARSessionDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARSession : NSObject <ARSensorDelegate, ARTechniqueDelegate>
{
    ARTechnique *_renderingTechnique;
    ARWorldTrackingTechnique *_worldTrackingTechnique;
    _Bool _configuredForWorldTracking;
    ARFrame *_lastProcessedFrame;
    NSObject<OS_dispatch_semaphore> *_lastProcessedFrameSemaphore;
    ARFrameContext *_nextFrameContext;
    NSObject<OS_dispatch_semaphore> *_nextFrameContextSemaphore;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    id _thermalStateObserver;
    long long _thermalState;
    CMMotionManager *_motionManger;
    ARSessionMetrics *_metrics;
    double _defaultRelocalizationDuration;
    NSDate *_relocalizationTimeoutDate;
    _Bool _relocalizationRequested;
    double _currentTrackingStartingTimestamp;
    long long _featurePointAccumulationCount;
    ARRenderSyncScheduler *_resultRequestScheduler;
    NSObject<OS_dispatch_queue> *_prepareTechniquesQueue;
    ARImageSensor *_imageSensor;
    _Bool _relocalizing;
    ARParentTechnique *_dontUseDirectlyTechnique;
    id <ARSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned long long _state;
    ARConfiguration *_configurationInternal;
    NSArray *_availableSensors;
    unsigned long long _runningSensors;
    unsigned long long _pausedSensors;
    unsigned long long _powerUsage;
    ARQATracer *_tracer;
}

+ (void)_applySessionOverrides:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) ARQATracer *tracer; // @synthesize tracer=_tracer;
@property _Bool relocalizing; // @synthesize relocalizing=_relocalizing;
@property unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property(nonatomic) unsigned long long pausedSensors; // @synthesize pausedSensors=_pausedSensors;
@property(nonatomic) unsigned long long runningSensors; // @synthesize runningSensors=_runningSensors;
@property(retain, nonatomic) NSArray *availableSensors; // @synthesize availableSensors=_availableSensors;
@property(retain) ARConfiguration *configurationInternal; // @synthesize configurationInternal=_configurationInternal;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ARSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ARParentTechnique *technique; // @synthesize technique=_dontUseDirectlyTechnique;
- (void).cxx_destruct;
- (void)_sessionDidOutputAudioData:(id)arg1;
- (void)_sessionShouldAttemptRelocalization;
- (void)_sessionDidRemoveAnchors:(id)arg1;
- (void)_sessionDidUpdateAnchors:(id)arg1;
- (void)_sessionDidAddAnchors:(id)arg1;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionCameraDidChangeTrackingState:(id)arg1;
- (void)_sessionDidUpdateFrame:(id)arg1;
- (void)_sessionWillRunWithConfiguration:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (void)sensorDidPause:(id)arg1;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)_stopAllSensors;
- (void)_stopSensorsWithDataTypes:(unsigned long long)arg1 keepingDataTypes:(unsigned long long)arg2;
- (void)_startSensorsWithDataTypes:(unsigned long long)arg1;
- (id)_imageSensorForConfiguration:(id)arg1 existingSensor:(id)arg2;
- (void)_updateSensorsWithConfiguration:(id)arg1;
- (void)_replaceOrAddSensor:(id)arg1;
- (void)_updateAnchorsForFrame:(id)arg1 resultDatas:(id)arg2 context:(id)arg3 addedAnchors:(id)arg4 updatedAnchors:(id)arg5 removedAnchors:(id)arg6;
- (void)_updateFeaturePointsForFrame:(id)arg1 previousFrame:(id)arg2 trackingStateChanged:(_Bool)arg3 context:(id)arg4;
- (void)_updateOriginTransformForFrame:(id)arg1 previousFrame:(id)arg2 modifiers:(unsigned long long)arg3 context:(id)arg4;
- (CDStruct_14d5dc5e)_cameraTransformForResultData:(id)arg1 previousFrame:(id)arg2;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (void)_updateSessionStateWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateSessionWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_setTechnique:(id)arg1;
- (id)_getObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_currentFrameContext;
- (id)_stateQueue;
- (void)_changePowerUsage:(unsigned long long)arg1;
- (void)_updatePowerUsage;
- (void)_updateThermalState:(id)arg1;
- (void)_endInterruption;
- (void)_interruptSession;
- (CDStruct_14d5dc5e)predictedDeviceTransformAtTimestamp:(double)arg1;
- (CDStruct_14d5dc5e)cameraTransformAtTimestamp:(double)arg1;
- (void)setOriginTransform:(CDStruct_14d5dc5e)arg1;
- (CDStruct_14d5dc5e)originTransform;
- (void)createReferenceObjectWithTransform:(CDStruct_14d5dc5e)arg1 center:(CDUnknownBlockType)arg2 extent:completionHandler: /* Error: Ran out of types for this method. */;
- (void)getCurrentWorldMapWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setWorldOrigin:(CDStruct_14d5dc5e)arg1;
- (void)removeAnchor:(id)arg1;
- (void)addAnchor:(id)arg1;
- (void)pause;
- (void)runWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)runWithConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) ARConfiguration *configuration;
@property(readonly, copy, nonatomic) ARFrame *currentFrame;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

