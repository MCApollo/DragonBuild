//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEOTFTrafficSnapshot, GEOTrafficTrafficApiResponse, GEOTransitOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOETARequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _timepoint;
    struct GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    GEOWaypointTyped *_originWaypointTyped;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEOWaypoint *_origin;
    NSString *_phoneticLocaleIdentifier;
    NSString *_requestingAppId;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    GEOTrafficTrafficApiResponse *_trafficApiResponse;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _transportType;
    unsigned int _walkingLimitMeters;
    BOOL _allowPartialResults;
    BOOL _includeDistance;
    BOOL _includeHistoricTravelTime;
    BOOL _includeRouteTrafficDetail;
    BOOL _includeShortTrafficSummary;
    BOOL _isFromAPI;
    BOOL _needServerLatency;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int has_timepoint:1;
        unsigned int has_sessionID:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_transportType:1;
        unsigned int has_walkingLimitMeters:1;
        unsigned int has_allowPartialResults:1;
        unsigned int has_includeDistance:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeRouteTrafficDetail:1;
        unsigned int has_includeShortTrafficSummary:1;
        unsigned int has_isFromAPI:1;
        unsigned int has_needServerLatency:1;
        unsigned int has_useLiveTrafficAsFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_commonOptions:1;
        unsigned int read_destinationWaypointTypeds:1;
        unsigned int read_destinations:1;
        unsigned int read_deviceHistoricalLocations:1;
        unsigned int read_lastKnownRoadLocation:1;
        unsigned int read_originWaypointTyped:1;
        unsigned int read_originalRouteID:1;
        unsigned int read_originalRouteZilchPoints:1;
        unsigned int read_origin:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_requestingAppId:1;
        unsigned int read_serviceTags:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficApiResponse:1;
        unsigned int read_trafficSnapshotIds:1;
        unsigned int read_trafficSnapshot:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_timepoint:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_commonOptions:1;
        unsigned int wrote_destinationWaypointTypeds:1;
        unsigned int wrote_destinations:1;
        unsigned int wrote_deviceHistoricalLocations:1;
        unsigned int wrote_lastKnownRoadLocation:1;
        unsigned int wrote_originWaypointTyped:1;
        unsigned int wrote_originalRouteID:1;
        unsigned int wrote_originalRouteZilchPoints:1;
        unsigned int wrote_origin:1;
        unsigned int wrote_phoneticLocaleIdentifier:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_sessionRelativeTimestamp:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficApiResponse:1;
        unsigned int wrote_trafficSnapshotIds:1;
        unsigned int wrote_trafficSnapshot:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_walkingLimitMeters:1;
        unsigned int wrote_allowPartialResults:1;
        unsigned int wrote_includeDistance:1;
        unsigned int wrote_includeHistoricTravelTime:1;
        unsigned int wrote_includeRouteTrafficDetail:1;
        unsigned int wrote_includeShortTrafficSummary:1;
        unsigned int wrote_isFromAPI:1;
        unsigned int wrote_needServerLatency:1;
        unsigned int wrote_useLiveTrafficAsFallback:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)trafficSnapshotIdsType;
+ (Class)serviceTagType;
+ (Class)deviceHistoricalLocationType;
+ (Class)destinationWaypointTypedType;
+ (Class)destinationType;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasNeedServerLatency;
@property(nonatomic) BOOL needServerLatency;
@property(nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property(nonatomic) BOOL useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) BOOL hasTrafficSnapshot;
- (void)_readTrafficSnapshot;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trafficSnapshotIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)trafficSnapshotIdsCount;
- (void)_addNoFlagsTrafficSnapshotIds:(id)arg1;
- (void)addTrafficSnapshotIds:(id)arg1;
- (void)clearTrafficSnapshotIds;
@property(retain, nonatomic) NSMutableArray *trafficSnapshotIds;
- (void)_readTrafficSnapshotIds;
@property(retain, nonatomic) GEOTrafficTrafficApiResponse *trafficApiResponse;
@property(readonly, nonatomic) BOOL hasTrafficApiResponse;
- (void)_readTrafficApiResponse;
- (id)serviceTagAtIndex:(NSUInteger)arg1;
- (NSUInteger)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) BOOL hasRequestingAppId;
- (void)_readRequestingAppId;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
- (void)_readPhoneticLocaleIdentifier;
@property(nonatomic) BOOL hasIncludeShortTrafficSummary;
@property(nonatomic) BOOL includeShortTrafficSummary;
@property(nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property(nonatomic) BOOL includeRouteTrafficDetail;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property(readonly, nonatomic) BOOL hasAbClientMetadata;
- (void)_readAbClientMetadata;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property(readonly, nonatomic) BOOL hasLastKnownRoadLocation;
- (void)_readLastKnownRoadLocation;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (void)_readClientCapabilities;
- (id)deviceHistoricalLocationAtIndex:(NSUInteger)arg1;
- (NSUInteger)deviceHistoricalLocationsCount;
- (void)_addNoFlagsDeviceHistoricalLocation:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
- (void)_readDeviceHistoricalLocations;
@property(retain, nonatomic) NSData *originalRouteZilchPoints;
@property(readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
- (void)_readOriginalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID;
@property(readonly, nonatomic) BOOL hasOriginalRouteID;
- (void)_readOriginalRouteID;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) BOOL hasSessionState;
- (void)_readSessionState;
@property(retain, nonatomic) GEOCommonOptions *commonOptions;
@property(readonly, nonatomic) BOOL hasCommonOptions;
- (void)_readCommonOptions;
@property(nonatomic) BOOL hasIsFromAPI;
@property(nonatomic) BOOL isFromAPI;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) BOOL hasWalkingOptions;
- (void)_readWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) BOOL hasTransitOptions;
- (void)_readTransitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) BOOL hasAutomobileOptions;
- (void)_readAutomobileOptions;
- (id)destinationWaypointTypedAtIndex:(NSUInteger)arg1;
- (NSUInteger)destinationWaypointTypedsCount;
- (void)_addNoFlagsDestinationWaypointTyped:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
- (void)_readDestinationWaypointTypeds;
@property(retain, nonatomic) GEOWaypointTyped *originWaypointTyped;
@property(readonly, nonatomic) BOOL hasOriginWaypointTyped;
- (void)_readOriginWaypointTyped;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(nonatomic) BOOL hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(nonatomic) BOOL hasIncludeDistance;
@property(nonatomic) BOOL includeDistance;
@property(nonatomic) BOOL hasAllowPartialResults;
@property(nonatomic) BOOL allowPartialResults;
@property(nonatomic) BOOL hasIncludeHistoricTravelTime;
@property(nonatomic) BOOL includeHistoricTravelTime;
- (id)destinationAtIndex:(NSUInteger)arg1;
- (NSUInteger)destinationsCount;
- (void)_addNoFlagsDestination:(id)arg1;
- (void)addDestination:(id)arg1;
- (void)clearDestinations;
@property(retain, nonatomic) NSMutableArray *destinations;
- (void)_readDestinations;
@property(retain, nonatomic) GEOWaypoint *origin;
@property(readonly, nonatomic) BOOL hasOrigin;
- (void)_readOrigin;
@property(nonatomic) BOOL hasTimepoint;
@property(nonatomic) struct GEOTimepoint timepoint;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithQuickETARequest:(id)arg1;

@end
