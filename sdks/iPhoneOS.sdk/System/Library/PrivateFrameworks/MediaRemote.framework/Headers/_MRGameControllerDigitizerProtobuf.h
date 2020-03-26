//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    double _x;
    double _y;
    BOOL _touchDown;
    struct {
        unsigned int timestamp:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int touchDown:1;
    } _has;
}

@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL touchDown; // @synthesize touchDown=_touchDown;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasTouchDown;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;

@end
