//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFScheduler-Protocol.h>

@class EDMessagePersistence;
@protocol EFScheduler;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler>
{
    NSUInteger _requestID;
    id <EFScheduler> _scheduler;
    EDMessagePersistence *_messagePersistence;
}

@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
// - (void).cxx_destruct;
- (void)performBlockWithActivity:(id /* CDUnknownBlockType */)arg1 requestID:(NSUInteger)arg2;
- (id)performWithObject:(id)arg1;
- (void)performVoucherPreservingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performSyncBlock:(id /* CDUnknownBlockType */)arg1;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithScheduler:(id)arg1 requestID:(NSUInteger)arg2 messagePersistence:(id)arg3;
- (id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2;

@end
