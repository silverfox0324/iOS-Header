//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetTimerAttributeIntentExport-Protocol.h>

@class INSpeakableString, INTimer, NSString;

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setToLabel:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *toLabel;
- (void)setToDuration:(double)arg1;
@property(readonly, nonatomic) double toDuration;
- (void)setTargetTimer:(id)arg1;
@property(readonly, copy, nonatomic) INTimer *targetTimer;
- (id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

