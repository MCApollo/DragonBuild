//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSSStyle;

__attribute__((visibility("hidden")))
@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>
{
    TSSStyle *mStyle;
    int mProperty;
}

+ (id)pairWithStyle:(id)arg1 property:(int)arg2;
// - (void).cxx_destruct;
- (id)description;
- (int)property;
- (id)style;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStyle:(id)arg1 property:(int)arg2;

@end
