//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class FBSceneSnapshot;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation>
{
    FBSceneSnapshot *_snapshot;
}

@property(retain, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_snapshot;
// - (void).cxx_destruct;
- (id)initWithSnapshot:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
