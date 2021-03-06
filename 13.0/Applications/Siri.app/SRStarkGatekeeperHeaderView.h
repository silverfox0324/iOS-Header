//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, UIFocusContainerGuide;
@protocol SRStarkGatekeeperHeaderViewDelegate;

@interface SRStarkGatekeeperHeaderView : UIView
{
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;
    id <SRStarkGatekeeperHeaderViewDelegate> _delegate;
    UIFocusContainerGuide *_gatekeeperHeaderViewFocusContainerGuide;
    NSString *_appBundleIdentifier;
}

+ (id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2;
+ (id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;
@property(retain, nonatomic, getter=_appBundleIdentifier, setter=_setAppBundleIdentifier:) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *gatekeeperHeaderViewFocusContainerGuide; // @synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide;
@property(nonatomic) __weak id <SRStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;
- (void)_logGatekeeperDismissedManually;
- (void)logGatekeeperAppeared;
- (void)_updateForAppBundleIdentifier;
- (void)_dismissalButtonTapped:(id)arg1;
- (_Bool)isEquivalentTo:(id)arg1;
- (void)dealloc;
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;
- (id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2;
- (id)_init;
- (void)updateGatekeeperWithAceObject:(id)arg1 currentTurnContext:(id)arg2;

@end

