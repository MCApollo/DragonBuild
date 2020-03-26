//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUITimeLabelStyle.h>


@class NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying>
{
    NTKLayoutRule *_layoutRule;
}

+ (id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 withBaselineY:(double)arg2 withFont:(id)arg3 forDevice:(id)arg4;
+ (id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 withFont:(id)arg2 forDevice:(id)arg3;
+ (id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 forDevice:(id)arg2;
+ (id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 weight:(double)arg2 forDevice:(id)arg3;
+ (id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 withBaselineY:(double)arg4 withFont:(id)arg5 forDevice:(id)arg6;
+ (id)defaultRoundedStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4;
+ (id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5;
+ (id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 font:(id)arg4 forDevice:(id)arg5;
+ (id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4;
@property(retain, nonatomic) NTKLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
