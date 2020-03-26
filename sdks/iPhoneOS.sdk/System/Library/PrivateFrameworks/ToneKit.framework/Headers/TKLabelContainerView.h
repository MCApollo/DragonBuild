//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView
{
    UILabel *_label;
    UIEdgeInsets _labelPaddingInsets;
}

@property(nonatomic) UIEdgeInsets labelPaddingInsets; // @synthesize labelPaddingInsets=_labelPaddingInsets;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(nonatomic) UIOffset labelShadowOffset;
@property(retain, nonatomic) UIColor *labelShadowColor;
@property(retain, nonatomic) UIColor *labelTextColor;
@property(retain, nonatomic) UIFont *labelFont;
@property(copy, nonatomic) NSString *labelText;
- (id)initWithFrame:(CGRect)arg1;

@end
