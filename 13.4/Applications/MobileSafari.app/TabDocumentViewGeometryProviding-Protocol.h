//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TabDocumentView;

@protocol TabDocumentViewGeometryProviding <NSObject>
- (_Bool)shouldApplyMinimumEffectiveDeviceWidthForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)scrollViewContentInsetAdjustmentsForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)maximumUnobscuredWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)minimumWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)obscuredScrollViewInsetsForTabDocumentView:(TabDocumentView *)arg1 unobscuredSafeAreaInsets:(struct UIEdgeInsets *)arg2;
- (_Bool)inElementFullscreenForTabDocumentView:(TabDocumentView *)arg1;
- (_Bool)shouldModifyWebViewGeometryForTabDocumentView:(TabDocumentView *)arg1;
- (_Bool)shouldFreezeWebViewUpdatesForTabDocumentView:(TabDocumentView *)arg1;

@optional
- (_Bool)shouldAdjustContentOffsetForTabDocumentView:(TabDocumentView *)arg1;
@end

