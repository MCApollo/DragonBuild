//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVDaemonListener, IMLocalObject, IMRemoteObject, NSLock, NSMutableArray, NSString;
@protocol IMAVDaemonProtocol, OS_dispatch_queue;

@interface IMAVDaemonController : NSObject
{
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource _runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (void)_disconnectFromDaemon;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (BOOL)_makeConnectionWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)localObjectExists;
- (BOOL)remoteObjectExists;
- (void)_noteSetupComplete;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
@property(readonly, nonatomic) IMAVDaemonListener *listener;
- (void)dealloc;
- (id)init;

@end
