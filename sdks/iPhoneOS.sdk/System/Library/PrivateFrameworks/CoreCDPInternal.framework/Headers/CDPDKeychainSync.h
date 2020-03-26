//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPDCircleProxy;

@interface CDPDKeychainSync : NSObject
{
    id <CDPDCircleProxy> _circleProxy;
}

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSyncWithProxy:(id)arg1;
+ (id)keyChainSync;
// - (void).cxx_destruct;
- (BOOL)synchronizeKeychainViewSetWithOtherPeers:(id )arg1;
- (BOOL)matchKeychainViewState:(BOOL)arg1;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_setKeychainSyncState:(BOOL)arg1;
- (void)_preflightCircleStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_processAuthFailure:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_isThisDeviceInCircle;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
