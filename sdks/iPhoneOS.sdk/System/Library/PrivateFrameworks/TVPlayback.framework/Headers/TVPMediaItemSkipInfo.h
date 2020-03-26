//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPMediaItemSkipInfo : NSObject
{
    NSUInteger _type;
    double _start;
    double _duration;
    double _target;
}

@property(readonly, nonatomic) double target; // @synthesize target=_target;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
- (id)_typeDescription;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4;

@end
