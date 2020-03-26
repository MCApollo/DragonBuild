//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BRAsset : NSObject
{
    BOOL _hasAudio;
    BOOL _hasHaptic;
    BOOL _isNull;
    long long _type;
    NSDictionary *_parameters;
}

+ (id)nullAsset;
+ (id)withType:(long long)arg1 andParameters:(id)arg2;
@property(readonly, nonatomic) BOOL isNull; // @synthesize isNull=_isNull;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) BOOL hasHaptic; // @synthesize hasHaptic=_hasHaptic;
@property(nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id propertyList;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3;
- (id)init;

@end
