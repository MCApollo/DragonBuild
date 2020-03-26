//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScrollView, WFDrawerDismissalPanMediator;
@protocol WFDrawerDismissalHelperDelegate;

@interface WFDrawerDismissalHelper : NSObject
{
    BOOL _didDismiss;
    id <WFDrawerDismissalHelperDelegate> _delegate;
    UIScrollView *_scrollView;
    NSHashTable *_activeGestureRecognizers;
    WFDrawerDismissalPanMediator *_panMediator;
    double _dismissalRectTopEdge;
    double _currentInsideness;
}

@property(nonatomic) double currentInsideness; // @synthesize currentInsideness=_currentInsideness;
@property(nonatomic) double dismissalRectTopEdge; // @synthesize dismissalRectTopEdge=_dismissalRectTopEdge;
@property(nonatomic) BOOL didDismiss; // @synthesize didDismiss=_didDismiss;
@property(retain, nonatomic) WFDrawerDismissalPanMediator *panMediator; // @synthesize panMediator=_panMediator;
@property(retain, nonatomic) NSHashTable *activeGestureRecognizers; // @synthesize activeGestureRecognizers=_activeGestureRecognizers;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WFDrawerDismissalHelperDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dismissCardWithPanGestureRecognizer:(id)arg1;
- (void)dismissCardWithVelocity:(double)arg1;
- (double)insidenessForGestureRecognizer:(id)arg1;
- (void)panGestureDidChange:(id)arg1;
- (void)panGestureRecognizerDidEnd:(id)arg1;
- (void)panGestureRecognizerDidBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end
