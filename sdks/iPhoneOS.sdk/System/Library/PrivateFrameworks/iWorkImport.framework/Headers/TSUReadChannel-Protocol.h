//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUIOChannel-Protocol.h>
#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@protocol TSUReadChannel <TSUIOChannel, TSUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(NSUInteger)arg2 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end
