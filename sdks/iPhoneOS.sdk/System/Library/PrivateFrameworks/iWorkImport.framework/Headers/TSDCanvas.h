//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext, TSUColor, TSUPointerKeyDictionary;
@protocol OS_dispatch_queue, TSDCanvasDelegate;

__attribute__((visibility("hidden")))
@interface TSDCanvas : NSObject
{
    id <TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    NSArray *mAllRepsOrdered;
    TSUPointerKeyDictionary *mRepsByLayout;
    TSDLayoutController *mLayoutController;
    BOOL mIsTemporaryForLayout;
    CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    BOOL mWideGamut;
    BOOL mIsAnchoredAtRight;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    BOOL mShouldUpdateLayersDuringLayout;
    BOOL mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    NSMutableArray *mBlocksToPerform;
    NSObject<OS_dispatch_queue> *mBlocksToPerformAccessQueue;
    NSHashTable *mCanvasLayoutObservers;
    BOOL mIgnoringClickThrough;
    TSUColor *mBackgroundColor;
    UIEdgeInsets mContentInset;
    BOOL mAllowsFontSubpixelQuantization;
    BOOL mSuppressesShadowsAndReflections;
    BOOL mSuppressesShapeText;
    BOOL mShouldRenderInvisibleContentForNonInteractiveCanvas;
    double i_viewScaleForAudioObjectsInNonInteractiveCanvas;
}

+ (void)p_recursivelyAddOrderedChildrenOfRep:(id)arg1 toArray:(id)arg2;
@property(readonly, nonatomic) BOOL isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) double i_viewScaleForAudioObjectsInNonInteractiveCanvas; // @synthesize i_viewScaleForAudioObjectsInNonInteractiveCanvas;
@property(nonatomic) BOOL shouldRenderInvisibleContentForNonInteractiveCanvas; // @synthesize shouldRenderInvisibleContentForNonInteractiveCanvas=mShouldRenderInvisibleContentForNonInteractiveCanvas;
@property(nonatomic) BOOL suppressesShapeText; // @synthesize suppressesShapeText=mSuppressesShapeText;
@property(nonatomic) BOOL suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=mSuppressesShadowsAndReflections;
@property(nonatomic) BOOL allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(copy, nonatomic) TSUColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(nonatomic) BOOL isAnchoredAtRight; // @synthesize isAnchoredAtRight=mIsAnchoredAtRight;
@property(readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property(readonly, nonatomic) NSSet *allReps; // @synthesize allReps=mAllReps;
@property(readonly, nonatomic) NSArray *topLevelReps; // @synthesize topLevelReps=mTopLevelReps;
@property(copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property(nonatomic) __weak id <TSDCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect unscaledRectOfLayouts;
@property(readonly, nonatomic) NSArray *allRepsOrdered;
- (void)p_removeAllReps;
- (void)orderRepsForLayout:(id)arg1;
- (BOOL)p_updateRepsFromLayouts;
- (void)p_layoutWithReadLock;
- (CGRect)p_bounds;
- (CGImage )i_newImageInContext:(CGContext )arg1 bounds:(CGRect)arg2 integralBounds:(CGRect)arg3 distortedToMatch:(BOOL)arg4 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg5;
- (CGContext )i_createContextToDrawImageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 distortedToMatch:(BOOL)arg3 returningBounds:(CGRect )arg4 integralBounds:(CGRect )arg5;
- (CGImage )i_imageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 distortedToMatch:(BOOL)arg3 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg4;
- (CGImage )i_imageInScaledRect:(CGRect)arg1 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg2;
- (CGImage )i_image;
- (void)i_drawRepsInContext:(CGContext )arg1 passingTest:(id /* CDUnknownBlockType */)arg2;
- (void)i_drawRepsInContext:(CGContext )arg1 passingTest:(id /* CDUnknownBlockType */)arg2 distort:(CGAffineTransform)arg3;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContext )arg2;
- (void)i_drawBackgroundInContext:(CGContext )arg1 bounds:(CGRect)arg2;
- (void)i_drawBackgroundInContext:(CGContext )arg1;
- (CGRect)i_clipRectForCreatingRepsFromLayouts;
- (CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(CGPoint)arg1;
- (void)i_unregisterRep:(id)arg1;
- (void)i_registerRep:(id)arg1;
- (BOOL)i_shouldIgnoreClickThrough;
- (void)i_performBlockWhileIgnoringClickThrough:(id /* CDUnknownBlockType */)arg1;
- (CGRect)visibleUnscaledRectForClippingReps;
- (CGSize)convertBoundsToUnscaledSize:(CGSize)arg1;
- (CGSize)convertUnscaledToBoundsSize:(CGSize)arg1;
- (CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1;
- (CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1;
- (CGRect)convertBoundsToUnscaledRect:(CGRect)arg1;
- (CGRect)convertUnscaledToBoundsRect:(CGRect)arg1;
@property(readonly, nonatomic) BOOL canvasIsWideGamut;
- (void)i_setCanvasIsWideGamut:(BOOL)arg1;
@property(readonly, nonatomic) double contentsScale;
- (void)i_setContentsScale:(double)arg1;
- (BOOL)textLayoutMustIncludeAdornments;
- (BOOL)isRenderingForKPF;
- (BOOL)isDrawingIntoPDF;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)isPrinting;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;
@property(readonly, nonatomic) BOOL isCanvasInteractive;
- (BOOL)spellCheckingSuppressed;
- (BOOL)spellCheckingSupported;
- (void)i_unregisterCanvasLayoutObserver:(id)arg1;
- (void)i_registerCanvasLayoutObserver:(id)arg1;
@property(readonly, nonatomic) BOOL supportsAdaptiveLayout;
- (BOOL)i_needsLayout;
- (void)i_layoutIfNeededUpdatingLayerTree;
- (void)i_layoutIfNeeded;
- (void)nonInteractiveLayoutIfNeeded;
- (void)invalidateLayers;
- (void)invalidateVisibleBounds;
- (void)invalidateReps;
- (void)layoutInvalidated;
- (void)recreateAllLayoutsAndReps;
- (id)repForLayout:(id)arg1;
- (void)i_updateInfosInLayoutController;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(BOOL)arg2;
@property(readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
- (void)i_setCanvasController:(id)arg1;
@property(readonly, nonatomic) TSKAccessController *accessController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)performBlockAfterLayoutIfNecessary:(id /* CDUnknownBlockType */)arg1;
- (Class)rootLayoutClass;
- (void)dealloc;
- (void)teardown;
- (id)initForTemporaryLayout;
- (id)initWithLayoutControllerClass:(Class)arg1 delegate:(id)arg2;
- (id)init;
- (id)textRendererForLayer:(id)arg1 context:(CGContext )arg2;

@end
