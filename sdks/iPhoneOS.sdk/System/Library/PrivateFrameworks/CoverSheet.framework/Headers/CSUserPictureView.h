//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

#import <CoverSheet/SBUILegibility-Protocol.h>

@class CNContact, _UILegibilitySettings, _UILegibilityView;

@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility>
{
    CNContact *_contact;
    _UILegibilityView *_monogramLegibilityView;
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    double _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
// - (void).cxx_destruct;
- (void)_regenerateImage;
- (id)presentationRegions;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
