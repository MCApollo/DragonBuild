//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    NSUInteger _offlineId;
    NSString *_offlineName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_offlineId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_offlineName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_offlineId:1;
        unsigned int wrote_offlineName:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) BOOL hasLatLng;
- (void)_readLatLng;
@property(nonatomic) BOOL hasOfflineId;
@property(nonatomic) NSUInteger offlineId;
@property(retain, nonatomic) NSString *offlineName;
@property(readonly, nonatomic) BOOL hasOfflineName;
- (void)_readOfflineName;
- (id)initWithData:(id)arg1;
- (id)init;

@end
