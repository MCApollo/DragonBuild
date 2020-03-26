//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface AMSXDDevice : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)deviceFromIdentifier:(id)arg1;
+ (id)allPairedDevices;
+ (id)activePairedDevices;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithDeviceID:(id)arg1 type:(long long)arg2;

@end
