//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (int)trackID;
- (id)track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (_Bool)isPlayable;
- (id)mediaSubTypes;
- (id)_track;
- (id)mediaType;
- (_Bool)displaysNonForcedSubtitles;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end

