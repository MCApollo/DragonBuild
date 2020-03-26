//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSDictionary, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    BOOL _shouldAbortThisOnboardingFlowGroup;
    BOOL _shouldAbortAllOnboarding;
    BOOL _forceOnboardingFinishedForErrorRecovery;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    NSUInteger _languageOnboardingFlowType;
    NSDictionary *_usageOptions;
    NSString *_assistantDeviceIntendedRecognitionLanguage;
}

@property(retain, nonatomic) NSString *assistantDeviceIntendedRecognitionLanguage; // @synthesize assistantDeviceIntendedRecognitionLanguage=_assistantDeviceIntendedRecognitionLanguage;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(nonatomic) NSUInteger languageOnboardingFlowType; // @synthesize languageOnboardingFlowType=_languageOnboardingFlowType;
@property(nonatomic) BOOL forceOnboardingFinishedForErrorRecovery; // @synthesize forceOnboardingFinishedForErrorRecovery=_forceOnboardingFinishedForErrorRecovery;
@property(nonatomic) BOOL shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)processUserInput:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_determineNextViewControllerWithPriorResults:(id)arg1;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

@end
