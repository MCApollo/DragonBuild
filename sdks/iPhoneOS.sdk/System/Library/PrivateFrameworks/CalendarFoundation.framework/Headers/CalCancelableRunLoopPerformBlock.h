//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>
{
    NSRunLoop *_runLoop;
    id /* CDUnknownBlockType */ _block;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
// - (void).cxx_destruct;
- (void)_performBlock:(id /* CDUnknownBlockType */)arg1;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1 inRunLoop:(id)arg2;

@end
