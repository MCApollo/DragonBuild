//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACRemoteAccountStoreSession.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession
{
    NSObject *_proxy;
}

// - (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxy;
- (id)initWithFakeProxy:(id)arg1;

@end
