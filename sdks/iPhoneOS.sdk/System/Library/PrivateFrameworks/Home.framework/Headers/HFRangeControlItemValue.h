//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFNumberRange, NSNumber;

@interface HFRangeControlItemValue : NSObject
{
    NSUInteger _mode;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_targetValue;
}

+ (id)targetValueWithValue:(id)arg1;
+ (id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
@property(copy, nonatomic) NSNumber *targetValue; // @synthesize targetValue=_targetValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) HFNumberRange *numberRange;

@end
