//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class NSData, NSNumber;

@interface BKMatchOperation : BKOperation
{
    BOOL _stopOnSuccess;
    BOOL _captureOnly;
    long long _purpose;
    NSNumber *_userID;
    long long _priority;
    NSData *_credentialSet;
    long long _useCase;
}

@property(nonatomic) BOOL captureOnly; // @synthesize captureOnly=_captureOnly;
@property(nonatomic) BOOL stopOnSuccess; // @synthesize stopOnSuccess=_stopOnSuccess;
@property(nonatomic) long long useCase; // @synthesize useCase=_useCase;
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
// - (void).cxx_destruct;
- (void)simulateMatching:(BOOL)arg1 type:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
