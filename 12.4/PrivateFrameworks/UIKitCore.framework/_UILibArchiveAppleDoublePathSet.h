//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UILibArchiveAppleDoublePathSet : NSObject
{
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}

+ (_Bool)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isConfirmedExactAppleDoubleItem:(id)arg1;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1;
- (void)confirmExactAppleDoubleFilesForItem:(id)arg1;
- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1;
- (id)init;

@end

