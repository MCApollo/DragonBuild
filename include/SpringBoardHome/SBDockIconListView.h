//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconListView.h>

@interface SBDockIconListView : SBIconListView
{
    BOOL _vertical;
    long long _layoutStyle;
    double _spacing;
    NSUInteger _minimumNumberOfIconsToDistributeEvenlyToEdges;
    UIEdgeInsets _layoutInsets;
}

+ (CGRect)defaultFrameForOrientation:(long long)arg1;
+ (NSUInteger)defaultIconViewConfigurationOptions;
+ (double)defaultHeight;
@property(nonatomic) NSUInteger minimumNumberOfIconsToDistributeEvenlyToEdges; // @synthesize minimumNumberOfIconsToDistributeEvenlyToEdges=_minimumNumberOfIconsToDistributeEvenlyToEdges;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(nonatomic, getter=isVertical) BOOL vertical; // @synthesize vertical=_vertical;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (CGSize)intrinsicContentSize;
- (CGSize)scaledAlignmentIconSize;
- (double)effectiveSpacingForNumberOfIcons:(NSUInteger)arg1;
@property(readonly, nonatomic) double effectiveSpacing;
- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 numberOfIcons:(NSUInteger)arg2;
- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
- (CGRect)boundsForLayout;
- (double)_additionalVerticalInsetToCenterIcons;
- (double)_additionalHorizontalInsetToCenterIcons;
- (id)iconAtPoint:(CGPoint)arg1 index:(NSUInteger )arg2 proposedOrder:(long long )arg3;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)adaptsOrientationToTraitCollection;
- (BOOL)automaticallyAdjustsLayoutMetricsToFit;
- (BOOL)allowsAddingIconCount:(NSUInteger)arg1;
- (void)didAddIconView:(id)arg1;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;

@end
