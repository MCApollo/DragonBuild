//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface CKJSONLDGraph : NSObject
{
    MISSING_TYPE *_entities;
    MISSING_TYPE *queue;
}

// - (void).cxx_destruct;
- (id)init;
- (void)linkedDataWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic, readonly) NSArray *entities;
- (id)initWithEntities:(id)arg1;

@end
