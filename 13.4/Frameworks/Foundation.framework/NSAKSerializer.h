//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKSerializer : NSObject
{
    id ss;
}

- (unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)serializePropertyList:(id)arg1;
- (unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2;
- (unsigned long long)serializeList:(id)arg1;
- (unsigned long long)serializeString:(id)arg1;
- (unsigned long long)serializeData:(id)arg1;
- (unsigned long long)serializeObject:(id)arg1;
- (id)serializerStream;
- (void)dealloc;
- (id)initForSerializerStream:(id)arg1;

@end

