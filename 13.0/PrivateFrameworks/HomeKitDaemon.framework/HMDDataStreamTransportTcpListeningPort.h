//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDDataStreamTransportTcpListeningPort : NSObject <NSCopying>
{
    unsigned short _tcpListeningPort;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) unsigned short tcpListeningPort; // @synthesize tcpListeningPort=_tcpListeningPort;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithTcpListeningPort:(unsigned short)arg1;
- (id)init;

@end

