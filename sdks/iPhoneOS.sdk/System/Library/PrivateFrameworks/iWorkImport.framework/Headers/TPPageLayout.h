//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPPageLayout.h>

#import <iWorkImport/TPAttachmentLayoutParent-Protocol.h>
#import <iWorkImport/TSDWrapInvalidationParent-Protocol.h>
#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>

@class NSArray, NSMutableSet, NSSet, TPBodyLayout, TPFootnoteContainerLayout, TPiOSMarginAdjustLayout, TSDFill, TSURetainedPointerKeyDictionary, TSWPPadding;
@protocol NSFastEnumeration, TPMasterDrawableProvider, TSWPHeaderFooterProvider;

__attribute__((visibility("hidden")))
@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent, TSDWrapInvalidationParent>
{
    id <TSWPHeaderFooterProvider> _headerFooterProvider;
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    NSUInteger _pageNumber;
    NSUInteger _pageCount;
    BOOL _shouldHeaderFooterBeVisible;
    BOOL _childLayoutsValid;
    TSURetainedPointerKeyDictionary *_oldChildLayouts;
    id <TPMasterDrawableProvider> _masterDrawableProvider;
    NSUInteger _contentFlags;
    int _inInvalidationClusterCount;
    BOOL _childTextLayoutsNeedInvalidationForExteriorWrap;
    BOOL _validating;
    BOOL _overrideAllowFootnotes;
    NSMutableSet *_anchoredDrawableLayouts;
    TPiOSMarginAdjustLayout *_marginAdjustLayout;
    TSDFill *_backgroundFill;
}

@property(readonly, nonatomic) TSDFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
@property(readonly, nonatomic) TPFootnoteContainerLayout *footnoteContainerLayout; // @synthesize footnoteContainerLayout=_footnoteContainerLayout;
@property(readonly, nonatomic) TPiOSMarginAdjustLayout *marginAdjustLayout; // @synthesize marginAdjustLayout=_marginAdjustLayout;
@property(nonatomic) BOOL overrideAllowFootnotes; // @synthesize overrideAllowFootnotes=_overrideAllowFootnotes;
@property(nonatomic, getter=isValidating) BOOL validating; // @synthesize validating=_validating;
// - (void).cxx_destruct;
- (pair_b2618ff2)p_sideMargins;
- (void)p_removeNoLongerInlineLayoutsFromBodyLayout;
- (void)p_removeInlineLayoutsFromPageLayout;
- (BOOL)p_isHeaderFooterLayout:(id)arg1;
- (void)p_sortChildLayouts;
- (void)p_populateOldChildLayoutsWithLayouts:(id)arg1;
- (id)p_insertFootnoteContainerLayout;
- (id)p_insertBodyLayout;
- (id)p_insertValidatedFloatingLayouts;
- (id)p_insertValidatedMasterLayouts;
- (id)p_existingChildLayoutForInfo:(id)arg1;
- (id)p_insertValidatedChildLayoutForInfo:(id)arg1;
- (id)p_insertChildLayoutForInfo:(id)arg1;
- (void)p_updateFromLayoutInfoProvider;
- (id)p_orderedChildInfos;
@property(readonly, nonatomic) BOOL marginsAreMirrored;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double )arg4 outGap:(double )arg5;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (CGSize)adjustedInsetsForTarget:(id)arg1;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) NSUInteger pageNumber;
- (void)evacuateOldChildLayoutCache;
- (void)validate;
- (NSUInteger)pageCountForAttachment:(id)arg1;
- (NSUInteger)pageNumberForAttachment:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)arg1;
- (double)maxAutoGrowLineWidthForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
- (CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (NSUInteger)autosizeFlagsForTextLayout:(id)arg1;
- (BOOL)descendersCannotClip;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)endResizeWrapInvalidationCluster;
- (void)beginResizeWrapInvalidationCluster;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(BOOL)arg2;
- (CGRect)footnoteContainerFrameWithSize:(CGSize)arg1;
- (void)inflateFootnotesInFootnoteContainer:(id)arg1;
- (double)blockHeightAvailableForFootnotes;
- (void)setNeedsInflation;
- (void)rebuildChildLayoutsOnNextValidationForcingTextLayout:(BOOL)arg1;
- (void)invalidateFootnoteContainers;
- (void)invalidateFootnoteSeparatorLine;
- (void)invalidateBodyAndMarginLayouts;
- (void)invalidateHeaderFooterLayouts;
- (void)invalidateHeaderFooterLayoutsCache;
- (void)processWidowAndInflation;
@property(readonly, nonatomic) NSSet *anchoredDrawableLayouts;
@property(readonly, nonatomic) NSArray *floatingDrawableLayouts;
- (BOOL)isRootLevelForInlineGeometry;
- (BOOL)isRootLayoutForInspectorGeometry;
@property(readonly, nonatomic) id <NSFastEnumeration> childTextLayoutsForExteriorWrap;
- (void)invalidateSize;
- (void)invalidatePosition;
- (id)dependentLayouts;
- (id)computeLayoutGeometry;
- (BOOL)allowIntersectionOfChildLayout:(id)arg1;
- (CGSize)maximumFrameSizeForChild:(id)arg1;
- (void)p_addLayoutIfAttached:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (id)pageLayout;
@property(readonly, nonatomic) NSUInteger pageIndex;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)providesGuidesForChildLayouts;
- (BOOL)isReadyForBodyLayout;
- (id)layoutsForChildInfo:(id)arg1;
- (id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2;
- (id)layoutForChildInfo:(id)arg1;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)invalidateLayoutsForPageCountChange;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (BOOL)allowsHeaderFooter;
@property(readonly, nonatomic) BOOL canHavePreviousPageFootnotes;
@property(readonly, nonatomic) BOOL allowsFootnotes;
@property(readonly, nonatomic) BOOL allowsBody;
@property(readonly, nonatomic) CGRect bodyRect;
@property(readonly, nonatomic) __weak TPBodyLayout *bodyLayout;
@property(readonly, nonatomic) __weak id <TPMasterDrawableProvider> masterDrawableProvider;
- (BOOL)headerFooterProviderValid;
- (id)headerFooterProvider;
- (Class)backgroundFillOwningInfoClass;
- (BOOL)shouldHeaderFooterBeVisible:(long long)arg1;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (void)dealloc;
- (void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2;

@end
