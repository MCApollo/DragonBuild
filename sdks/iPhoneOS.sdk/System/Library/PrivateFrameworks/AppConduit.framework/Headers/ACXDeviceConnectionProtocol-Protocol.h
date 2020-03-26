//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MIInstallOptions, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, NSUUID;

@protocol ACXDeviceConnectionProtocol <NSObject>
- (void)acknowledgeTestFlightInstallBegunForApp:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)installRequestFailedForApp:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 failureReason:(NSError *)arg3 wasUserInitiated:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)systemAppIsInstallableOnDeviceWithPairingID:(NSUUID *)arg1 withBundleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)fetchInstallableSystemAppWithBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(ACXRemoteApplication *, NSError *))arg3;
- (void)fetchInstallableSystemAppBundleIDsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocalizedValuesFromAllDevicesForInfoPlistKeys:(NSSet *)arg1 forAppWithBundleID:(NSString *)arg2 fetchingFirstMatchingLocalizationInList:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSUUID *, NSUInteger, NSError *))arg2;
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)applicationIsInstalledOnDeviceWithPairingID:(NSUUID *)arg1 withCompanionBundleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)applicationIsInstalledOnDeviceWithPairingID:(NSUUID *)arg1 withBundleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(ACXApplication *, NSError *))arg3;
- (void)fetchInstalledWatchAppWithBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(ACXRemoteApplication *, NSError *))arg3;
- (void)fetchLocallyAvailableWatchAppWithBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 options:(NSUInteger)arg3 completion:(void (^)(ACXApplication *, NSError *))arg4;
- (void)fetchInstalledWatchAppBundleIDsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocallyAvailableWatchAppBundleIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)cancelUpdatePendingForCompanionApp:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUpdatePendingForCompanionApp:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(NSString *)arg1 preferences:(NSDictionary *)arg2 writingToPreferencesLocation:(NSUInteger)arg3 forDeviceWithPairingID:(NSUUID *)arg4 options:(NSUInteger)arg5 completion:(void (^)(NSError *))arg6;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchProvisioningProfilesForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeProvisioningProfileWithID:(NSString *)arg1 fromDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)installProvisioningProfileWithData:(NSData *)arg1 onDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)disableObservers;
- (void)enableObservers;
- (void)getAlwaysInstallForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(BOOL))arg2;
- (void)removeApplication:(NSString *)arg1 fromDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(long long))arg3;
- (void)installApplicationAtURL:(NSURL *)arg1 onDeviceWithPairingID:(NSUUID *)arg2 installOptions:(MIInstallOptions *)arg3 size:(long long)arg4 completion:(void (^)(long long, NSError *))arg5;
- (void)installApplication:(NSString *)arg1 withProvisioningProfileInfo:(NSDictionary *)arg2 forTestFlight:(BOOL)arg3 onDeviceWithPairingID:(NSUUID *)arg4 completion:(void (^)(long long, NSError *))arg5;
- (void)retryPendingAppInstallationsOnDeviceWithPairingID:(NSUUID *)arg1;
- (void)cancelPendingInstallations;
- (void)installAllApplications;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)fetchInfoForApplicationWithBundleID:(NSString *)arg1 forDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchApplicationWithContainingApplicationBundleID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchInstalledCompatibleApplicationsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)activeComplicationsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchInstalledComplicationsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchInstalledApplicationsForDeviceWithPairingID:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end
