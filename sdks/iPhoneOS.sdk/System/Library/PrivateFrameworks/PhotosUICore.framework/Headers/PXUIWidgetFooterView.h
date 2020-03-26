//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFocusGuide, UIFont;
@protocol PXUIWidgetFooterViewDelegate;

@interface PXUIWidgetFooterView : UIView
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        BOOL hasContent;
        BOOL disclosure;
        BOOL separators;
        BOOL focusGuide;
    } _needsUpdateFlags;
    struct {
        BOOL didSelectDisclosure;
    } _delegateRespondsTo;
    BOOL __hasContent;
    id <PXUIWidgetFooterViewDelegate> _delegate;
    NSString *_disclosureTitle;
    UIFont *_font;
    long long _layoutStyle;
    NSArray *__constraints;
    UIButton *__disclosureButton;
    UIView *__leadingSeparator;
    UIView *__trailingSeparator;
    UIFocusGuide *__focusGuide;
    UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) UIFocusGuide *_focusGuide; // @synthesize _focusGuide=__focusGuide;
@property(readonly, nonatomic) UIView *_trailingSeparator; // @synthesize _trailingSeparator=__trailingSeparator;
@property(readonly, nonatomic) UIView *_leadingSeparator; // @synthesize _leadingSeparator=__leadingSeparator;
@property(readonly, nonatomic) UIButton *_disclosureButton; // @synthesize _disclosureButton=__disclosureButton;
@property(copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setHasContent:) BOOL _hasContent; // @synthesize _hasContent=__hasContent;
@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(nonatomic) __weak id <PXUIWidgetFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateFocusGuideIfNeeded;
- (void)_invalidateFocusGuide;
- (void)_updateSeparatorsIfNeeded;
- (void)_invalidateSeparators;
- (void)_updateDisclosureIfNeeded;
- (void)_invalidateDisclosure;
- (void)_updateHasContentIfNeeded;
- (void)_invalidateHasContent;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (id)_focusGuideCreateIfNeeded:(BOOL)arg1;
- (id)_trailingSeparatorCreateIfNeeded:(BOOL)arg1;
- (id)_leadingSeparatorCreateIfNeeded:(BOOL)arg1;
- (id)_disclosureButtonCreateIfNeeded:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;

@end
