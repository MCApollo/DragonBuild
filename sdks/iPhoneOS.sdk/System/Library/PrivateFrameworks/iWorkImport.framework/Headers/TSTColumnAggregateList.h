//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>


@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTColumnAggregateList : TSKSosBase <NSCopying>
{
    NSArray *_columnAggregates;
}

// - (void).cxx_destruct;
- (void)encodeToArchive:(struct ColumnAggregateListArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ColumnAggregateListArchive )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)aggregatesOnLevel:(unsigned char)arg1;
@property(readonly, nonatomic) NSArray *asArray;
- (id)initWithColumnAggregates:(id)arg1;

@end
