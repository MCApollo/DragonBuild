//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock, SKUIClientContext, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* CDUnknownBlockType */ _outputBlock;
    SKUIResourceRequest *_request;
    long long __loadReason;
}

@property(nonatomic, setter=_setLoadReason:) long long _loadReason; // @synthesize _loadReason=__loadReason;
// - (void).cxx_destruct;
- (void)cancel;
- (void)main;
@property(copy) id /* CDUnknownBlockType */ outputBlock;
@property(retain) SKUIClientContext *clientContext;
@property(readonly, copy) SKUIResourceRequest *resourceRequest;
- (id)initWithResourceRequest:(id)arg1;
- (id)init;
- (id)_initSKUILoadResourceOperation;

@end
