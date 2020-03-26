//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKQuantityType, NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer
{
    NSDateInterval *_dateInterval;
    HKQuantityType *_quantityType;
    NSUInteger _statisticsOptions;
    NSUInteger _mergeStrategy;
}

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(readonly, nonatomic) NSUInteger mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(readonly, nonatomic) NSUInteger statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
// - (void).cxx_destruct;
- (id)_queue_fetchStatisticsWithError:(id )arg1;
- (id)quantityType;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
