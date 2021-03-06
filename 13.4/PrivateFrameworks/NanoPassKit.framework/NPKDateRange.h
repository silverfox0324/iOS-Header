//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKDateRange-Protocol.h>

@class NSDate, NSString;

@interface NPKDateRange : NSObject <NPKDateRange>
{
    NSDate *_startDate;
    NSString *_startDateString;
    NSDate *_expiryDate;
    NSString *_expiryDateString;
}

+ (id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *expiryDateString; // @synthesize expiryDateString=_expiryDateString;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *startDateString; // @synthesize startDateString=_startDateString;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithExpireDate:(id)arg1 formatterStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

