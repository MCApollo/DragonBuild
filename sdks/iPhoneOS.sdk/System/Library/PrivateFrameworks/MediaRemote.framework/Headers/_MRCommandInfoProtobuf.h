//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _preferredIntervals;
    CDStruct_95bda58d _supportedInsertionPositions;
    CDStruct_95bda58d _supportedPlaybackQueueTypes;
    struct {
        float list;
        NSUInteger count;
        NSUInteger size;
    } _supportedRates;
    int _canScrub;
    int _command;
    NSMutableArray *_currentPlaybackSessionTypes;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    NSString *_playbackSessionIdentifier;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    NSMutableArray *_supportedCustomQueueIdentifiers;
    NSMutableArray *_supportedPlaybackSessionTypes;
    int _upNextItemCount;
    BOOL _active;
    BOOL _enabled;
    BOOL _supportsSharedQueue;
    struct {
        unsigned int canScrub:1;
        unsigned int command:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int numAvailableSkips:1;
        unsigned int preferredPlaybackRate:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int skipFrequency:1;
        unsigned int skipInterval:1;
        unsigned int upNextItemCount:1;
        unsigned int active:1;
        unsigned int enabled:1;
        unsigned int supportsSharedQueue:1;
    } _has;
}

+ (Class)currentPlaybackSessionTypesType;
+ (Class)supportedPlaybackSessionTypesType;
+ (Class)supportedCustomQueueIdentifierType;
@property(retain, nonatomic) NSString *playbackSessionIdentifier; // @synthesize playbackSessionIdentifier=_playbackSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *currentPlaybackSessionTypes; // @synthesize currentPlaybackSessionTypes=_currentPlaybackSessionTypes;
@property(retain, nonatomic) NSMutableArray *supportedPlaybackSessionTypes; // @synthesize supportedPlaybackSessionTypes=_supportedPlaybackSessionTypes;
@property(nonatomic) float preferredPlaybackRate; // @synthesize preferredPlaybackRate=_preferredPlaybackRate;
@property(nonatomic) int upNextItemCount; // @synthesize upNextItemCount=_upNextItemCount;
@property(nonatomic) BOOL supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(retain, nonatomic) NSMutableArray *supportedCustomQueueIdentifiers; // @synthesize supportedCustomQueueIdentifiers=_supportedCustomQueueIdentifiers;
@property(nonatomic) int canScrub; // @synthesize canScrub=_canScrub;
@property(nonatomic) int skipFrequency; // @synthesize skipFrequency=_skipFrequency;
@property(nonatomic) int numAvailableSkips; // @synthesize numAvailableSkips=_numAvailableSkips;
@property(nonatomic) int skipInterval; // @synthesize skipInterval=_skipInterval;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) float maximumRating; // @synthesize maximumRating=_maximumRating;
@property(nonatomic) float minimumRating; // @synthesize minimumRating=_minimumRating;
@property(retain, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaybackSessionIdentifier;
- (id)currentPlaybackSessionTypesAtIndex:(NSUInteger)arg1;
- (NSUInteger)currentPlaybackSessionTypesCount;
- (void)addCurrentPlaybackSessionTypes:(id)arg1;
- (void)clearCurrentPlaybackSessionTypes;
- (id)supportedPlaybackSessionTypesAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedPlaybackSessionTypesCount;
- (void)addSupportedPlaybackSessionTypes:(id)arg1;
- (void)clearSupportedPlaybackSessionTypes;
@property(nonatomic) BOOL hasPreferredPlaybackRate;
@property(nonatomic) BOOL hasUpNextItemCount;
@property(nonatomic) BOOL hasSupportsSharedQueue;
- (void)setSupportedInsertionPositions:(int )arg1 count:(NSUInteger)arg2;
- (int)supportedInsertionPositionsAtIndex:(NSUInteger)arg1;
- (void)addSupportedInsertionPositions:(int)arg1;
- (void)clearSupportedInsertionPositions;
@property(readonly, nonatomic) int supportedInsertionPositions;
@property(readonly, nonatomic) NSUInteger supportedInsertionPositionsCount;
- (id)supportedCustomQueueIdentifierAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedCustomQueueIdentifiersCount;
- (void)addSupportedCustomQueueIdentifier:(id)arg1;
- (void)clearSupportedCustomQueueIdentifiers;
- (void)setSupportedPlaybackQueueTypes:(int )arg1 count:(NSUInteger)arg2;
- (int)supportedPlaybackQueueTypesAtIndex:(NSUInteger)arg1;
- (void)addSupportedPlaybackQueueTypes:(int)arg1;
- (void)clearSupportedPlaybackQueueTypes;
@property(readonly, nonatomic) int supportedPlaybackQueueTypes;
@property(readonly, nonatomic) NSUInteger supportedPlaybackQueueTypesCount;
@property(nonatomic) BOOL hasCanScrub;
@property(nonatomic) BOOL hasSkipFrequency;
@property(nonatomic) BOOL hasNumAvailableSkips;
@property(nonatomic) BOOL hasSkipInterval;
@property(nonatomic) BOOL hasPresentationStyle;
- (int)StringAsShuffleMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
@property(nonatomic) BOOL hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
- (int)StringAsRepeatMode:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
@property(nonatomic) BOOL hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
- (void)setSupportedRates:(float )arg1 count:(NSUInteger)arg2;
- (float)supportedRateAtIndex:(NSUInteger)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearSupportedRates;
@property(readonly, nonatomic) float supportedRates;
@property(readonly, nonatomic) NSUInteger supportedRatesCount;
@property(nonatomic) BOOL hasMaximumRating;
@property(nonatomic) BOOL hasMinimumRating;
@property(readonly, nonatomic) BOOL hasLocalizedShortTitle;
@property(readonly, nonatomic) BOOL hasLocalizedTitle;
- (void)setPreferredIntervals:(double )arg1 count:(NSUInteger)arg2;
- (double)preferredIntervalAtIndex:(NSUInteger)arg1;
- (void)addPreferredInterval:(double)arg1;
- (void)clearPreferredIntervals;
@property(readonly, nonatomic) double preferredIntervals;
@property(readonly, nonatomic) NSUInteger preferredIntervalsCount;
@property(nonatomic) BOOL hasActive;
@property(nonatomic) BOOL hasEnabled;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) BOOL hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;
- (void)dealloc;

@end
