//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError, TRTransferServer;

@protocol TRTransferServerDelegate <NSObject>

@optional
- (void)server:(TRTransferServer *)arg1 didFailToReceiveData:(NSError *)arg2;
- (void)server:(TRTransferServer *)arg1 didReceiveData:(NSData *)arg2 replyHandler:(void (^)(NSData *))arg3;
- (void)serverWillReceiveData:(TRTransferServer *)arg1;
@end
