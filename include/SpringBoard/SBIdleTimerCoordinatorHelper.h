//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol SBIdleTimerCoordinating, SBIdleTimerProviding;

@interface SBIdleTimerCoordinatorHelper : NSObject
{
    id <SBIdleTimerProviding> _sourceProvider;
    id <SBIdleTimerCoordinating> _targetCoordinator;
    NSMapTable *_idleTimerCache;
}

@property(readonly, nonatomic) NSMapTable *idleTimerCache; // @synthesize idleTimerCache=_idleTimerCache;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> targetCoordinator; // @synthesize targetCoordinator=_targetCoordinator;
@property(nonatomic) __weak id <SBIdleTimerProviding> sourceProvider; // @synthesize sourceProvider=_sourceProvider;
// - (void).cxx_destruct;
- (id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (id)idleTimerProxyForProvider:(id)arg1;
- (void)removeProvider:(id)arg1;
- (id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4;
- (id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3;
- (id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3;
- (BOOL)hasProvider:(id)arg1;
- (id)initWithSourceProvider:(id)arg1;
- (id)init;

@end

