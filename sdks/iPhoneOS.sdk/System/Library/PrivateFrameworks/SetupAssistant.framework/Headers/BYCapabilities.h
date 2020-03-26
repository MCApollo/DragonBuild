//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYCapabilities : NSObject
{
}

+ (id)sharedCapabilities;
- (BOOL)mgHasGreenTea;
- (BOOL)mgHasCellularTelephony;
- (BOOL)mgHasMesa;
- (BOOL)mgHasSecureElement;
- (BOOL)mgHasSiriCapability;
- (BOOL)canShowAppleIDScreen;
- (BOOL)canShowPasscodeScreen;
- (BOOL)canShowFaceIDScreen;
- (BOOL)canShowTouchIDScreen;
- (BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg1;
- (BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg1;
- (id)_paymentScreenRequirements;
- (BOOL)canShowPaymentScreen;
- (BOOL)canShowSiriScreen;
- (BOOL)supportsApplePay;
- (BOOL)isPearlEnrolled;
- (BOOL)supportsPearl;

@end
