//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileInstallation/MIStoreMetadata.h>

@interface MIStoreMetadata (Legacy)
+ (id)legacy_metadataWithActivity:(id)arg1;
+ (id)lib_metadataWithStoreItem:(id)arg1;
+ (id)lib_metadataFromDatabaseRepresentation:(id)arg1 error:(id *)arg2;
+ (id)lib_metadataFromApplication:(id)arg1 error:(id *)arg2;
- (void)legacy_setPropertiesWithActivity:(id)arg1;
- (_Bool)lib_updateMetadataForApplication:(id)arg1 error:(id *)arg2;
- (void)lib_setPropertiesWithStoreItem:(id)arg1;
- (void)lib_setPropertiesWithSINFData:(id)arg1;
- (void)lib_setPropertiesWithPurchaseInfo:(id)arg1;
- (void)lib_setPropertiesWithAccount:(id)arg1;
- (id)lib_databaseRepresentationError:(id *)arg1;
@end

