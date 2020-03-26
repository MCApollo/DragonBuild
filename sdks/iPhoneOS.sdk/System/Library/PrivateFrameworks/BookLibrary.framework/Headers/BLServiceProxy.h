//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLServiceProtocol-Protocol.h>

@class NSXPCConnection;

@interface BLServiceProxy : NSObject <BLServiceProtocol>
{
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)purchaseWithRequest:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)cancelAllActiveDownloadsWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)resumeDownloadWithID:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)pauseDownloadWithID:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)fetchDownloadListWithReply:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)shutdown;
- (id)initWithError:(out id )arg1;

@end
