//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPPlaybackState : NSObject
{
    NSString *_name;
}

+ (id)scanning;
+ (id)playing;
+ (id)paused;
+ (id)loading;
+ (id)stopped;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end
