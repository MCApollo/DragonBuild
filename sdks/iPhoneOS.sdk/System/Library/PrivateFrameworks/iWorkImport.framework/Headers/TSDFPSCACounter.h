//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFPSCounter.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    NSUInteger _maxFrameDelta;
    BOOL _shouldRunTimer;
}

@property(nonatomic) BOOL shouldRunTimer; // @synthesize shouldRunTimer=_shouldRunTimer;
// - (void).cxx_destruct;
- (void)stopLoggingFPS;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)reset;
- (id)init;

@end
