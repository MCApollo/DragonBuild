//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStatusBar;

@interface SBZoomView : UIView
{
    UIView *_contentView;
    UIStatusBar *_statusBar;
}

+ (id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
// - (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)_initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
