//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MSPieImageView, NSObject, SUPlayerStatus, UIImageView;
@protocol OS_dispatch_source;

@interface MSAudioProgressView : UIView
{
    UIImageView *_bufferingImageView;
    NSObject<OS_dispatch_source> *_bufferingTimer;
    _Bool _highlighted;
    SUPlayerStatus *_playerStatus;
    MSPieImageView *_progressView;
    UIImageView *_stopImageView;
}

@property(copy, nonatomic) SUPlayerStatus *playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)_showBufferingImageView;
- (id)_newProgressView;
- (id)_newBufferingImageView;
- (void)_cancelBufferingTimer;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

