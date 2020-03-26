//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject
{
    NSMutableDictionary *__loadHandlers;
}

+ (id)providerWithItem:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *_loadHandlers; // @synthesize _loadHandlers=__loadHandlers;
// - (void).cxx_destruct;
- (void)registerItem:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic) NSSet *registeredIdentifiers;
- (id)itemForIdentifier:(id)arg1;
- (BOOL)hasItemForIdentifier:(id)arg1;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
