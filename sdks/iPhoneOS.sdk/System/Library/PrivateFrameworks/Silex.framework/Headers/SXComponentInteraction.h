//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentView;
@protocol SXComponentInteractionHandler;

@interface SXComponentInteraction : NSObject
{
    SXComponentView *_componentView;
    id <SXComponentInteractionHandler> _handler;
    NSUInteger _types;
}

@property(readonly, nonatomic) NSUInteger types; // @synthesize types=_types;
@property(readonly, nonatomic) id <SXComponentInteractionHandler> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
// - (void).cxx_destruct;
- (BOOL)handlesType:(NSUInteger)arg1;
- (id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(NSUInteger)arg3;

@end
