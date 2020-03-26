//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXRelatedDataSource : PXSectionedDataSource
{
    BOOL _transient;
    BOOL _useItemIndexPaths;
    NSArray *_relatedEntries;
}

@property(readonly, copy, nonatomic) NSArray *relatedEntries; // @synthesize relatedEntries=_relatedEntries;
@property(readonly, nonatomic) BOOL useItemIndexPaths; // @synthesize useItemIndexPaths=_useItemIndexPaths;
@property(readonly, nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
// - (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForRelatedEntry:(id)arg1;
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithRelatedEntries:(id)arg1 isTransient:(BOOL)arg2 useItemIndexPaths:(BOOL)arg3;
- (id)init;

@end
