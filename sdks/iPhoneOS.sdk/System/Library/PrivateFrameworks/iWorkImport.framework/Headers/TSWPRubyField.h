//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPRubyField : TSWPSmartField
{
    NSString *_rubyText;
}

@property(copy, nonatomic) NSString *rubyText; // @synthesize rubyText=_rubyText;
// - (void).cxx_destruct;
- (BOOL)supportsDeepCopyForUndo;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct RubyFieldArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct RubyFieldArchive )arg1 archiver:(id)arg2;
- (BOOL)canCopy:(_NSRange)arg1;
- (BOOL)allowsEditing;
- (int)styleAttributeArrayKind;
- (NSUInteger)attributeArrayKind;
- (int)smartFieldKind;
- (id)text;
@property(readonly, nonatomic) int baseTextScript;
@property(readonly, nonatomic) NSString *baseText;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;

@end
