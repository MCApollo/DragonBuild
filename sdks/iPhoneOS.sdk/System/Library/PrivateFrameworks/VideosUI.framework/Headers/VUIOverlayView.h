//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, IKViewElement, NSArray, VUILabel, VUIOverlayLayout, VUITextBadgeView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUIOverlayView : UIView
{
    CALayer *_gradientLayer;
    VUIOverlayLayout *_overlayLayout;
    IKViewElement *_viewElement;
    VUILabel *_titleLabel;
    IKViewElement *_titleElement;
    VUITextBadgeView *_textBadge;
    IKViewElement *_textBadgeElement;
    NSArray *_badgeViewWrappers;
    _TVProgressView *_progressView;
    UIView *_gradientView;
}

+ (id)overlayViewFromMediaItem:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) _TVProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *badgeViewWrappers; // @synthesize badgeViewWrappers=_badgeViewWrappers;
@property(retain, nonatomic) IKViewElement *textBadgeElement; // @synthesize textBadgeElement=_textBadgeElement;
@property(retain, nonatomic) VUITextBadgeView *textBadge; // @synthesize textBadge=_textBadge;
@property(retain, nonatomic) IKViewElement *titleElement; // @synthesize titleElement=_titleElement;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIOverlayLayout *overlayLayout; // @synthesize overlayLayout=_overlayLayout;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
// - (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
