//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/TSURectList.h>

@interface TSUMutableRectList : TSURectList
{
}

- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)setList:(id)arg1;
- (void)makeEmpty;
- (void)replaceRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRectList:(id)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

