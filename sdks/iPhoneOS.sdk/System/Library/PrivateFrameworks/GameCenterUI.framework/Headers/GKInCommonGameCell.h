//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell
{
    GKGameRecord *_localPlayerGameRecord;
}

@property(retain, nonatomic) GKGameRecord *localPlayerGameRecord; // @synthesize localPlayerGameRecord=_localPlayerGameRecord;
- (void)prepareForReuse;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (void)didUpdateModel;
- (void)dealloc;

@end
