//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADWatchDog : NSObject
{
    NSString *_reason;
    NSUInteger _delayTime;
}

@property(nonatomic) NSUInteger delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (void)updateReason:(id)arg1;
- (id)initWithReason:(id)arg1 andDelay:(NSUInteger)arg2;

@end
