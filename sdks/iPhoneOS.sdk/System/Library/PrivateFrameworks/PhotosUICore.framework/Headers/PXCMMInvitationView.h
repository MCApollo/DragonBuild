//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXCMMInvitationViewModel, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, UILabel, UIView;
@protocol PXCMMInvitationViewDelegate;

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver>
{
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    id <PXCMMInvitationViewDelegate> _delegate;
    PXCMMInvitationViewModel *_viewModel;
}

+ (id)subtitle2Color;
+ (id)subtitle1Color;
+ (id)titleBulletColor;
+ (long long)subtitle2TextStyle;
+ (long long)subtitle1TextStyle;
+ (long long)titleTextStyle;
+ (UIFont )subtitle2Font;
+ (UIFont )subtitle1Font;
+ (UIFont )titleEmphasizedFont;
+ (UIFont )titleFont;
+ (CGSize)posterHeaderViewSizeForSize:(CGSize)arg1 scale:(double)arg2;
+ (CGSize)posterImageSizeThatFits:(CGSize)arg1 scale:(double)arg2;
+ (CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2;
@property(retain, nonatomic) PXCMMInvitationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PXCMMInvitationViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (BOOL)test_selected;
- (id)test_subtitle2;
- (id)test_subtitle1;
- (id)test_title;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_updateOpaqueAncestorBackgroundColor;
- (BOOL)_updateSubtitle2;
- (BOOL)_updateSubtitle1;
- (BOOL)_updateTitle;
- (void)_updateHeaderView;
- (CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) UIView *previewView;
@property(readonly, nonatomic) CGRect headerViewBounds;
- (id)initWithFrame:(CGRect)arg1;

@end
