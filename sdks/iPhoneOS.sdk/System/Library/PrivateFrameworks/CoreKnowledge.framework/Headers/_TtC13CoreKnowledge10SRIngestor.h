//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13CoreKnowledge10SRIngestor : NSObject
{
    MISSING_TYPE *db;
    MISSING_TYPE *date;
    MISSING_TYPE *intent;
    MISSING_TYPE *intentUUID;
    MISSING_TYPE *dkEventUUID;
    MISSING_TYPE *bundleID;
    MISSING_TYPE *direction;
    MISSING_TYPE *inintentHandlingStatus;
    MISSING_TYPE *engagementSignals;
}

+ (void)backfillInteractionsWithHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)saveInteraction:(id)arg1 dkEventUUID:(id)arg2;
// - (void).cxx_destruct;
- (id)init;

@end
