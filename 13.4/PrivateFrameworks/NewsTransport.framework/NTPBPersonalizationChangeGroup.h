//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying>
{
    unsigned long long _changeNumber;
    NSMutableArray *_deltas;
    NSString *_instanceIdentifier;
    struct {
        unsigned int changeNumber:1;
    } _has;
}

+ (Class)deltasType;
@property(nonatomic) unsigned long long changeNumber; // @synthesize changeNumber=_changeNumber;
@property(retain, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasChangeNumber;
@property(readonly, nonatomic) _Bool hasInstanceIdentifier;
- (id)deltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltasCount;
- (void)addDeltas:(id)arg1;
- (void)clearDeltas;
- (void)dealloc;

@end

