//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKSettingsUIVisibilityProvider-Protocol.h>

@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider>
{
    BOOL _settingsUIVisible;
}

@property BOOL settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
- (void)connectToDaemon;

@end
