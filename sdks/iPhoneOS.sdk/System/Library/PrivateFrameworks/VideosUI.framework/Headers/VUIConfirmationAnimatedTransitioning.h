//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface VUIConfirmationAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
}

@property(readonly, nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithPresenting:(BOOL)arg1;
- (id)init;

@end
