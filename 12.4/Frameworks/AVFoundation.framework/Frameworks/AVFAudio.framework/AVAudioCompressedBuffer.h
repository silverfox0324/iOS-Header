//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer
{
}

@property(nonatomic) unsigned int packetCount;
@property(readonly, nonatomic) void *data;
@property(readonly, nonatomic) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly, nonatomic) long long maximumPacketSize;
@property(readonly, nonatomic) unsigned int packetCapacity;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2 maximumPacketSize:(long long)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned int byteCapacity; // @dynamic byteCapacity;
@property(nonatomic) unsigned int byteLength; // @dynamic byteLength;

@end

