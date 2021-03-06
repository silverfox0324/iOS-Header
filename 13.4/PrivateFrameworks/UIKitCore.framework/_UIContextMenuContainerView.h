//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIContextMenuContainerView : UIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _dismissesInstantly;
    UIView *_contentWrapperView;
    CDUnknownBlockType _dismissalHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) __weak UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
@property(nonatomic) _Bool dismissesInstantly; // @synthesize dismissesInstantly=_dismissesInstantly;
- (void)_attemptDismiss:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_swipeToDismiss:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

