//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class BKSAnimationFenceHandle, FBSSceneMessage;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding>
{
    FBSSceneMessage *_message;
    BKSAnimationFenceHandle *_animationFence;
}

@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(copy, nonatomic) FBSSceneMessage *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
