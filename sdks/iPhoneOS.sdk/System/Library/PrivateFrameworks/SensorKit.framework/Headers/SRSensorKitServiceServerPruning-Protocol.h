//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SRSensorKitServiceServerPruning
- (void)removeAllSamplesForAllSensors;
- (void)removeAllSamplesForCurrentSensor;
- (void)requestFileHandleForPruningAfterSegment:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestFileHandleForPruningSample:(double)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)startPruningForSensor:(NSString *)arg1 deviceId:(NSString *)arg2;
@end
