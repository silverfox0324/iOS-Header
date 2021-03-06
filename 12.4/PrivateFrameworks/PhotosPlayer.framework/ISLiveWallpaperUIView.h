//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayerUIView.h>

@class ISLiveWallpaperPlayer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView
{
    UIGestureRecognizer *_playbackGestureRecognizer;
}

@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void).cxx_destruct;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) ISLiveWallpaperPlayer *player; // @dynamic player;

@end

