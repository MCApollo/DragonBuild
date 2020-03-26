//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFDragFeedbackGenerator.h>

@class NSDate;

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator
{
    BOOL _initializedReorderSound;
    unsigned int _reorderSound;
    NSDate *_lastDragStartDate;
}

@property(nonatomic) unsigned int reorderSound; // @synthesize reorderSound=_reorderSound;
@property(nonatomic) BOOL initializedReorderSound; // @synthesize initializedReorderSound=_initializedReorderSound;
@property(retain, nonatomic) NSDate *lastDragStartDate; // @synthesize lastDragStartDate=_lastDragStartDate;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)playReorderSound;
- (void)draggingActionsEnteredDeletionZone:(id)arg1;
- (void)draggingMovedActions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 inWorkflow:(id)arg4;
- (void)draggingRemovedActions:(id)arg1;
- (void)draggingInsertedActions:(id)arg1 intoWorkflow:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)draggingItemSnapped;
- (void)draggingStarted;

@end
