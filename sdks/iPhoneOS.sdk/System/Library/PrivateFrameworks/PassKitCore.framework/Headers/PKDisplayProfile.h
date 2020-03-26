//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (Class)classForDisplayProfileType:(long long)arg1;
+ (id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
