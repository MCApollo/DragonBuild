//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LPLinkMetadataStatusTransformer, NSAttributedString, NSURL;

@protocol LPLinkMetadataStatusTransformer
- (NSURL *)actionURLForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (NSAttributedString *)statusForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (void)destroyForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (void)initializeForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
@end
