//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TUMomentDescriptor, TUMomentsCapabilities;

@protocol TUMomentsControllerXPCClient <NSObject>
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg1;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(NSString *)arg1;
- (oneway void)didUpdateCapabilities:(TUMomentsCapabilities *)arg1 forVideoStreamToken:(long long)arg2;
@end
