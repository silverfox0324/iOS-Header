//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (RTExtensions)
+ (id)participationStatusToString:(long long)arg1;
- (_Bool)hasTTLBeenTriggered;
- (_Bool)hasUserSpecifiedLocation;
- (_Bool)hasRejectedSuggestion;
- (_Bool)hasConfirmedSuggestedLocation;
- (_Bool)hasSuggestedLocation;
- (_Bool)needsSuggestedLocation;
- (id)description;
- (unsigned long long)participantStatus;
@end

