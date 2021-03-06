//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKApplicationDelegate-Protocol.h>

@class NSString;
@protocol TSKCompatibilityDelegate;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>
{
    id <TSKCompatibilityDelegate> _compatibilityDelegate;
}

+ (id)documentDirectoryPath;
+ (void)setSurrogateDelegate:(id)arg1;
+ (id)sharedDelegate;
+ (_Bool)isUnitTesting;
@property(retain, nonatomic) id <TSKCompatibilityDelegate> compatibilityDelegate; // @synthesize compatibilityDelegate=_compatibilityDelegate;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, getter=isInBackground) _Bool inBackground;
@property(readonly, getter=isActivating) _Bool activating;
- (_Bool)shouldGenerateGuidesForOffscreenLayouts;
@property(readonly, nonatomic) _Bool performanceModeEnabled;
@property(readonly, nonatomic) _Bool designModeEnabled;
- (id)defaultHyperlinkURL;
- (_Bool)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (id)validURLSchemes;
- (id)invalidURLSchemes;
- (id)appChartPropertyOverrides;
- (id)previewImageForType:(id)arg1;
- (_Bool)shouldValidateMasterLayoutWhileInsertingRows;
- (_Bool)supportsScrollingInPhoneCommentUI;
- (_Bool)supportsRTL;
- (_Bool)shouldRenderCurvedShadow;
- (_Bool)shouldRenderContactShadow;
- (struct CGRect)applicationToolbarFrame;
@property(readonly, nonatomic) _Bool isCanvasFullScreen;
@property(readonly, nonatomic) _Bool centerOnInitialSelection;
- (id)createCompatibilityDelegate;
@property(readonly, nonatomic) NSString *templateTypeDisplayName;
@property(readonly, nonatomic) NSString *documentTypeDisplayName;
@property(readonly, nonatomic) NSString *applicationName;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) _Bool textInspectorShowsMoreSubpane;
@property(readonly, nonatomic) _Bool tableCellInspectorShowsNaturalAlignment;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;

@end

