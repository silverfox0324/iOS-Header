//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell
{
}

- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (void)setDelegate:(id)arg1;
@property(readonly) SearchUICardSectionView *cardSectionView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SearchUICardSectionView *sizingContainer; // @dynamic sizingContainer;

@end

