//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLLocation, NSError, NSString;

@protocol IMLocationManager <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) BOOL locationAuthorizationDenied;
@property(readonly, nonatomic) BOOL locationAuthorizationDetermined;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(NSString *)arg1 updateHandler:(void (^)(CLLocation *, NSError *))arg2;
- (void)startUpdatingCurrentLocationWithHandler:(void (^)(CLLocation *, NSError *))arg1;
@end
