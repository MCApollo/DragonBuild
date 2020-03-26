//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NUNode.h>

@class UIView;

@interface NUViewNode : NUNode
{
    UIView *_view;
    Class _viewClass;
    CGRect _frame;
    CGRect _bounds;
}

@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)setBounds:(CGRect)arg1;
- (CGRect)bounds;
- (CGRect)frame;
// - (void).cxx_destruct;
- (void)resolveViewsInView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)removeFromSupernode;
- (id)description;
- (id)initWithView:(id)arg1;
- (id)initWithViewClass:(Class)arg1;

@end
