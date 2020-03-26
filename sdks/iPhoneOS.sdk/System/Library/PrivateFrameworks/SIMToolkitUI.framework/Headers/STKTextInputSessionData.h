//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKTextInputSessionData : STKTextSessionData
{
    NSString *_defaultText;
    BOOL _isSecure;
    BOOL _isDigitsOnly;
    NSUInteger _minimumInputLength;
    NSUInteger _maximumInputLength;
}

@property(readonly, nonatomic) NSUInteger maximumInputLength; // @synthesize maximumInputLength=_maximumInputLength;
@property(readonly, nonatomic) NSUInteger minimumInputLength; // @synthesize minimumInputLength=_minimumInputLength;
@property(readonly, nonatomic) BOOL isDigitsOnly; // @synthesize isDigitsOnly=_isDigitsOnly;
@property(readonly, nonatomic) BOOL isSecure; // @synthesize isSecure=_isSecure;
@property(readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
// - (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1;

@end
