//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSTTableSortRowTag : NSObject
{
    unsigned int _rowIndex;
    NSMutableArray *_reorganizeValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reorganizeValues; // @synthesize reorganizeValues=_reorganizeValues;
@property(nonatomic) unsigned int rowIndex; // @synthesize rowIndex=_rowIndex;
- (id)reorganizeValueAtIndex:(unsigned long long)arg1;
- (void)setReorganizeValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithNumberOfSortRules:(unsigned long long)arg1;

@end

