//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MNTimeballLocationRequest : NSObject
{
    double _desiredAccuracy;
    NSUInteger _attemptCount;
    NSUInteger _maxAttempts;
    NSDate *_requestDate;
    double _timeoutInterval;
    id /* CDUnknownBlockType */ _completionBlock;
}

+ (id)requestWithAccuracy:(double)arg1 maxAttempts:(NSUInteger)arg2 timeoutInterval:(double)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(nonatomic) NSUInteger maxAttempts; // @synthesize maxAttempts=_maxAttempts;
@property(nonatomic) NSUInteger attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
// - (void).cxx_destruct;
- (id)init;

@end
