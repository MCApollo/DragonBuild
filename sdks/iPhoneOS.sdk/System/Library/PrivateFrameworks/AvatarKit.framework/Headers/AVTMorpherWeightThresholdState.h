//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTMorpherWeightThresholdState : NSObject
{
    BOOL _isAnimating;
    BOOL _isFadingOutAnimation;
    float _currentValue;
    float _target;
    double _t0;
}

@property(nonatomic) float target; // @synthesize target=_target;
@property(nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double t0; // @synthesize t0=_t0;
@property(nonatomic) BOOL isFadingOutAnimation; // @synthesize isFadingOutAnimation=_isFadingOutAnimation;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;

@end
