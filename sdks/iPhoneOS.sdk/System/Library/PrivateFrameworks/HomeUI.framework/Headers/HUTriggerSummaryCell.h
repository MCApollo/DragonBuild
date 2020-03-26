//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUSelectableCellProtocol-Protocol.h>

@class HFItem, HUIconListView, NSArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView;

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol>
{
    BOOL _disabled;
    BOOL _canBeSelected;
    BOOL _hideTitle;
    BOOL _hideDescription;
    BOOL _hideDescriptionIcon;
    HFItem *_item;
    NSString *_titleText;
    NSString *_descriptionText;
    UIImage *_descriptionIcon;
    NSArray *_iconDescriptors;
    UIColor *_cellColor;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_descriptionIconView;
    HUIconListView *_iconContainerView;
    UIView *_textContainerView;
    double _textAlpha;
    UIFont *_titleFont;
    UIFont *_descriptionFont;
}

@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) HUIconListView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIImageView *descriptionIconView; // @synthesize descriptionIconView=_descriptionIconView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(retain, nonatomic) UIColor *cellColor; // @synthesize cellColor=_cellColor;
@property(retain, nonatomic) NSArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
@property(nonatomic) BOOL hideDescriptionIcon; // @synthesize hideDescriptionIcon=_hideDescriptionIcon;
@property(retain, nonatomic) UIImage *descriptionIcon; // @synthesize descriptionIcon=_descriptionIcon;
@property(nonatomic) BOOL hideDescription; // @synthesize hideDescription=_hideDescription;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) BOOL hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)updateSelectionUI;
- (void)updateTitle;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (void)updateUIIconsWithResults:(id)arg1;
- (void)updateUITextWithResults:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)updateHorizontalLabelConstraints;
- (void)updateVerticalLabelConstraints;
- (void)setUpTextContainerViewConstraints;
- (void)setUpIconContainerViewConstraints;
- (void)updateConstraints;
@property(nonatomic) BOOL canBeSelected; // @synthesize canBeSelected=_canBeSelected;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
