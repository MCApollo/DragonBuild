//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSOutputStream;

@interface NviDataLogger : NSObject <NSStreamDelegate>
{
    NSOutputStream *_oStream;
}

@property(retain, nonatomic) NSOutputStream *oStream; // @synthesize oStream=_oStream;
// - (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)endRequest;
- (void)logData:(id)arg1;
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;

@end
