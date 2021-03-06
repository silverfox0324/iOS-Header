//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPresentationContainerView.h>

@class AVPlayerViewControllerContentView;

__attribute__((visibility("hidden")))
@interface AVPlayerView : AVPresentationContainerView
{
    _Bool _needsInitialLayout;
    AVPlayerViewControllerContentView *_contentView;
}

@property(nonatomic) _Bool needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property(readonly, nonatomic) AVPlayerViewControllerContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)beginManagingContentView;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end

