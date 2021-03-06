//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload
{
    NSData *_vendorData;
}

+ (id)copyTypeDescription;
@property(retain) NSData *vendorData; // @synthesize vendorData=_vendorData;
- (void).cxx_destruct;
- (_Bool)parsePayloadData;
- (_Bool)generatePayloadData;
- (_Bool)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

