//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessory.h>

#import <HomeKitDaemon/HMDAccessoryUserManagement-Protocol.h>
#import <HomeKitDaemon/HMDDeviceControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessorySettingGroup, HMDAccessorySymptomHandler, HMDDevice, HMDDeviceController, HMDRemoteLoginHandler, HMDSoftwareUpdate, HMDTargetControlManager, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSArray, NSString;

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDDeviceControllerDelegate, HMDAccessoryUserManagement, HMFLogging>
{
    HMDDevice *_device;
    HMDDeviceController *_deviceController;
    BOOL _deviceReachable;
    BOOL _fixedPairingIdentityInCloud;
    HMFPairingIdentity *_pairingIdentity;
    HMDAccessorySettingGroup *_rootSettings;
    HMDRemoteLoginHandler *_remoteLoginHandler;
    HMDAccessorySymptomHandler *_symptomsHandler;
    HMFSoftwareVersion *_softwareVersion;
    HMDSoftwareUpdate *_softwareUpdate;
    HMFWiFiNetworkInfo *_wifiNetworkInfo;
    HMDTargetControlManager *_targetControlManager;
    NSArray *_supportedMultiUserLanguageCodes;
    HMFPairingIdentity *_lastCreatedPairingIdentity;
    id /* CDUnknownBlockType */ _settingsConnectionFactory;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)__deviceMediaRouteIdentifier;
+ (BOOL)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(NSUInteger)arg3;
@property(copy) id /* CDUnknownBlockType */ settingsConnectionFactory; // @synthesize settingsConnectionFactory=_settingsConnectionFactory;
@property(retain, nonatomic) HMFPairingIdentity *lastCreatedPairingIdentity; // @synthesize lastCreatedPairingIdentity=_lastCreatedPairingIdentity;
@property(nonatomic) BOOL fixedPairingIdentityInCloud; // @synthesize fixedPairingIdentityInCloud=_fixedPairingIdentityInCloud;
@property(retain) NSArray *supportedMultiUserLanguageCodes; // @synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes;
@property(retain, nonatomic) HMDTargetControlManager *targetControlManager; // @synthesize targetControlManager=_targetControlManager;
@property(readonly) HMDAccessorySymptomHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(readonly) HMDRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageReceiverChildren;
- (void)deviceController:(id)arg1 didUpdateDevice:(id)arg2;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(NSUInteger)arg1;
- (id)transactionWithObjectChangeType:(NSUInteger)arg1;
- (id)remoteMessageDestination;
- (void)_relayRequestMessage:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)handleCurrentNetworkChangedNotification:(id)arg1;
- (void)updateWiFiNetworkInfo;
@property(readonly) HMFWiFiNetworkInfo *wifiNetworkInfo; // @synthesize wifiNetworkInfo=_wifiNetworkInfo;
- (void)handleDeleteSiriHistoryRequest:(id)arg1;
- (void)_startUpdate:(id)arg1;
- (void)_fetchAvailableUpdate:(id)arg1;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (BOOL)supportsSoftwareUpdate;
- (void)_updateSoftwareVersion:(id)arg1;
@property(readonly) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
- (void)updateRootGroup:(id)arg1;
- (void)addRootSettings;
- (BOOL)supportsSettings;
- (void)pairingsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeUser:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)addUser:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) BOOL supportsUserManagement;
- (void)createPairingIdentity;
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property(readonly) HMDAccessorySettingGroup *rootSettings; // @synthesize rootSettings=_rootSettings;
- (void)_handleUpdatedName:(id)arg1;
- (id)runtimeState;
- (long long)reachableTransports;
- (void)setRemotelyReachable:(BOOL)arg1;
- (BOOL)isRemotelyReachable;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (void)startMonitoringReachability;
- (id)deviceMonitor;
@property(nonatomic, getter=isDeviceReachable) BOOL deviceReachable; // @synthesize deviceReachable=_deviceReachable;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (BOOL)shouldUpdateWithDevice:(id)arg1;
- (void)updateWithDevice:(id)arg1;
@property(readonly) HMDDevice *device;
- (BOOL)supportsPersonalRequests;
- (BOOL)supportsMediaContentProfile;
- (BOOL)requiresHomeAppForManagement;
- (BOOL)supportsCompanionInitiatedRestart;
- (BOOL)supportsMultiUser;
- (BOOL)supportsTargetControl;
- (BOOL)isCurrentAccessory;
- (void)reconfigureOnMediaSystemDisolve;
- (void)autoConfigureTargetControllers;
- (void)_fixCloudKeyIfNeeded;
- (void)_fetchMultiUserLanguages;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (void)_registerForMessages;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)assistantObject;

@end
