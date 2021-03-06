//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <Preferences/PINEntryView-Protocol.h>

@class FailureBarView, UIButton, UILabel;
@protocol PSPINEntryViewDelegate;

@interface PINView : UIView <PINEntryView>
{
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
    UIButton *_optionsButton;
    id <PSPINEntryViewDelegate> _delegate;
    id /* CDUnknownBlockType */ _passcodeOptionsHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ passcodeOptionsHandler; // @synthesize passcodeOptionsHandler=_passcodeOptionsHandler;
@property(nonatomic) __weak id <PSPINEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_layoutBottomSubview:(id)arg1 withMinY:(double)arg2 withSize:(CGSize)arg3;
- (void)layoutBottomSubview:(id)arg1 withLabel:(id)arg2 withMinY:(double)arg3;
- (void)layoutTopLabel:(id)arg1 withMaxY:(double)arg2;
- (void)setShowsOptionsButton:(BOOL)arg1;
- (void)optionsButtonTapped;
- (id)optionsButton;
- (void)layoutSubviews;
- (void)setBlocked:(BOOL)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)notifyDelegatePINEntered;
- (void)notifyDelegatePINChanged;
- (BOOL)becomeFirstResponder;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (double)getCurrentTitleFontSize;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)hideError;
- (void)showError:(id)arg1 animate:(BOOL)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;

@end

