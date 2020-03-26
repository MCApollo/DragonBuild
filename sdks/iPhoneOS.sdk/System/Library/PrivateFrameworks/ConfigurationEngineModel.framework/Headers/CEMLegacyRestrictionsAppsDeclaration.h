//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber;

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowChat;
    NSNumber *_payloadAllowiTunes;
    NSNumber *_payloadAllowNews;
    NSNumber *_payloadAllowPodcasts;
    NSNumber *_payloadAllowSafari;
    NSNumber *_payloadAllowVideoConferencing;
    NSArray *_payloadBlacklistedAppBundleIDs;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowChat:(id)arg2 withAllowiTunes:(id)arg3 withAllowNews:(id)arg4 withAllowPodcasts:(id)arg5 withAllowSafari:(id)arg6 withAllowVideoConferencing:(id)arg7 withBlacklistedAppBundleIDs:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadBlacklistedAppBundleIDs; // @synthesize payloadBlacklistedAppBundleIDs=_payloadBlacklistedAppBundleIDs;
@property(copy, nonatomic) NSNumber *payloadAllowVideoConferencing; // @synthesize payloadAllowVideoConferencing=_payloadAllowVideoConferencing;
@property(copy, nonatomic) NSNumber *payloadAllowSafari; // @synthesize payloadAllowSafari=_payloadAllowSafari;
@property(copy, nonatomic) NSNumber *payloadAllowPodcasts; // @synthesize payloadAllowPodcasts=_payloadAllowPodcasts;
@property(copy, nonatomic) NSNumber *payloadAllowNews; // @synthesize payloadAllowNews=_payloadAllowNews;
@property(copy, nonatomic) NSNumber *payloadAllowiTunes; // @synthesize payloadAllowiTunes=_payloadAllowiTunes;
@property(copy, nonatomic) NSNumber *payloadAllowChat; // @synthesize payloadAllowChat=_payloadAllowChat;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end
