//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXCloudQuotaController, UIView;
@protocol PXAnonymousViewController;

@protocol PXCloudQuotaControllerDelegate <NSObject>
- (NSObject<PXAnonymousViewController> *)presentingViewControllerForCloudQuotaController:(PXCloudQuotaController *)arg1;
- (void)cloudQuotaController:(PXCloudQuotaController *)arg1 presentInformationBanner:(UIView *)arg2;
@end

