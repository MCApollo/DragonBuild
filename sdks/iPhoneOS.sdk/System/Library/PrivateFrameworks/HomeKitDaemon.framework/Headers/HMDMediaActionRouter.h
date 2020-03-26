//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMPCSessionDataMediaProfileSource-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMDMPCSessionController, NSObject, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>
{
    BOOL _shouldExecuteOnCurrentDevice;
    id <HMDMediaActionRouterDataSource> _dataSource;
    HMDMPCSessionController *_mpcSessionController;
}

@property(readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // @synthesize mpcSessionController=_mpcSessionController;
@property(readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)mediaProfileWithUUID:(id)arg1;
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1;
- (void)routeMessage:(id)arg1;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)routeMediaActionForExecution:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_registerForMessages;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end
