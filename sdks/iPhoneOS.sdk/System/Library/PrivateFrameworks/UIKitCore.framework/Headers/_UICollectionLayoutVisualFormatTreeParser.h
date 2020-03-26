//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _UICollectionLayoutVisualTreeNode;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatTreeParser : NSObject
{
    _UICollectionLayoutVisualTreeNode *_root;
    NSArray *_visualFormats;
}

+ (id)treeParserWithVisualFormats:(id)arg1;
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(retain, nonatomic) _UICollectionLayoutVisualTreeNode *root; // @synthesize root=_root;
// - (void).cxx_destruct;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;
- (id)_parse;
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (id)initWithVisualFormats:(id)arg1;

@end
