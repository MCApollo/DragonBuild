//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPKProtoStandaloneHelper : NSObject
{
}

+ (NSUInteger)toPKPaymentSetupFieldType:(int)arg1;
+ (id)toPKPaymentSetupField:(id)arg1;
+ (int)toNPKProtoStandaloneReaderModeIngestionState:(NSUInteger)arg1;
+ (id)toJsonString:(id)arg1;
+ (id)toNPKProtoStandalonePaymentSetupProductImageAssetURLs:(id)arg1;
+ (id)toNPKProtoStandalonePaymentSetupProductPaymentOption:(id)arg1;
+ (id)toNPKProtoStandalonePaymentDigitalIssuanceMetadata:(id)arg1;
+ (id)toNPKProtoStandalonePaymentProvisioningMethodMetadata:(id)arg1;
+ (id)toNPKProtoStandalonePaymentSetupProduct:(id)arg1;
+ (id)toNPKProtoStandalonePaymentProvisioningFlowPickerItem:(id)arg1;
+ (id)toNPKProtoStandalonePaymentProvisioningFlowPickerSection:(id)arg1;
+ (id)toNPKProtoStandaloneCreditAccountCredential:(id)arg1;
+ (id)toNPKProtoStandalonePaymentRemoteCredential:(id)arg1;
+ (id)toNPKProtoStandalonePaymentCredentialUnion:(id)arg1 withFlowIdentifier:(id)arg2;
+ (id)toNPKProtoStandalonePaymentCredential:(id)arg1;
+ (int)toNPKProtoStandalonePaymentApplicationState:(long long)arg1;
+ (id)toNPKProtoStandaloneVerificationChannel:(id)arg1;
+ (int)toNPKProtoStandaloneVerificationChannelType:(NSUInteger)arg1;
+ (id)toNPKProtoStandalonePaymentPass:(id)arg1;
+ (id)sha1hash:(id)arg1;
+ (id)toNPKProtoStandalonePass:(id)arg1;
+ (int)toNPKProtoStandalonePaymentPassActivationState:(NSUInteger)arg1;
+ (int)toNPKProtoStandalonePassType:(NSUInteger)arg1;
+ (id)toNPKProtoStandalonePaymentSetupMoreInfoItem:(id)arg1;
+ (void)_convertIssuerVerificationCodeStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertMoreInformationStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertIssuerVerificationFieldsStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertIssuerVerificationChannelsStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertProvisioningResultStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertProvisioningProgressStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertTermsAndConditionsStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertLocalDeviceManualEntryProgress:(id)arg1 protoContext:(id)arg2;
+ (void)_convertLocalDeviceManualEntry:(id)arg1 protoContext:(id)arg2;
+ (void)_convertSecondaryManualEntryStepContext:(id)arg1 protoContext:(id)arg2;
+ (id)toNPKProtoStandalonePaymentSetupField:(id)arg1;
+ (id)toNPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext:(id)arg1;
+ (void)_convertManualEntryStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertReaderModeIngestionStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertReaderModeEntryStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertDigitalIssuancePaymentStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertDigitalIssuanceAmountStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertChooseCredentialsStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertChooseProductStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertChooseFlowStepContext:(id)arg1 protoContext:(id)arg2;
+ (void)_convertWelcomeStepContext:(id)arg1 protoContext:(id)arg2;
+ (id)toStringValue:(id)arg1;
+ (id)toNPKProtoStandaloneError:(id)arg1;
+ (int)toNPKProtoStandalonePaymentSetupFieldType:(NSUInteger)arg1;
+ (id)toNPKProtoStandalonePaymentProvisioningFlowStepContext:(id)arg1 fromStep:(int)arg2 toStep:(int)arg3;

@end
