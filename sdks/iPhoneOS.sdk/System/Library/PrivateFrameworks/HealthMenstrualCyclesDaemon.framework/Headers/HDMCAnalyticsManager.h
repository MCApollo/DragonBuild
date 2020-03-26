//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDMCAnalysisManager, HDPeriodicActivity, HDProfile;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>
{
    HDMCAnalysisManager *_analysisManager;
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_queue_performActivityWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (BOOL)periodicActivityRequiresProtectedData:(id)arg1;
- (void)daemonReady:(id)arg1;
- (double)_retryInterval;
- (double)_submissionInterval;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2;

@end
