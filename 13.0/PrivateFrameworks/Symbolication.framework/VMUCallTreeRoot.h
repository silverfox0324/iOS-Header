//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

@class NSArray, NSMapTable, NSMutableSet, NSString, VMUSampler;
@protocol VMUStackLogReader;

@interface VMUCallTreeRoot : VMUCallTreeNode
{
    struct _CSTypeRef _symbolicator;
    id <VMUStackLogReader> _stackLogReader;
    VMUSampler *_sampler;
    unsigned long long _options;
    NSMutableSet *_uniqueNodeNames;
    NSMapTable *_addressToSymbolNameMap;
    NSMapTable *_addressToLeafSymbolNameMap;
    NSMapTable *_threadPortToNameMap;
    NSString *_binaryImagesDescription;
    NSArray *_binaryImages;
}

@property(copy, nonatomic) NSString *binaryImagesDescription; // @synthesize binaryImagesDescription=_binaryImagesDescription;
- (void).cxx_destruct;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(_Bool)arg1;
- (id)initWithCallGraphFile:(id)arg1 fileHeader:(id *)arg2 topFunctionsList:(id *)arg3 binaryImagesList:(id *)arg4;
- (id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addBacktrace:(id)arg1;
- (id)addBacktrace:(id)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(_Bool)arg3 startOfRecursion:(_Bool)arg4;
- (void)dealloc;
- (void)allBacktracesHaveBeenAdded;
- (void)setStackLogReader:(id)arg1;
- (id)initWithSymbolicator:(struct _CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned long long)arg3;

@end

