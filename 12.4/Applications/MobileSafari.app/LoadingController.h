//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WKWebView;
@protocol LoadingControllerDelegate;

@interface LoadingController : NSObject
{
    NSURL *_URL;
    NSString *_title;
    WKWebView *_webView;
    id <LoadingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <LoadingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)reloadAllowingContentBlockers:(_Bool)arg1 fromOrigin:(_Bool)arg2;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2 shouldOpenExternalURLs:(_Bool)arg3;
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2;
@property(readonly, nonatomic) NSString *titleForStatePersisting;
@property(readonly, nonatomic) NSURL *URLForStatePersisting;
@property(retain, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(nonatomic) float estimatedProgress;

@end

