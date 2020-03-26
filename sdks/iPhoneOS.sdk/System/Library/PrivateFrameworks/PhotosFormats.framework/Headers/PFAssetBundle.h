//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;

@interface PFAssetBundle : NSObject
{
    BOOL _didReadOriginalPairedVideoMetadata;
    NSURL *_photoURL;
    NSURL *_videoURL;
    NSURL *_audioURL;
    NSURL *_alternatePhotoURL;
    NSURL *_fullSizePhotoURL;
    NSURL *_fullSizeVideoURL;
    NSURL *_adjustmentDataURL;
    NSURL *_adjustmentBasePhotoURL;
    NSURL *_pairedVideoURL;
    NSURL *_fullSizePairedVideoURL;
    NSURL *_adjustmentBasePairedVideoURL;
    NSURL *_spatialOvercapturePhotoURL;
    NSURL *_spatialOvercapturePairedVideoURL;
    NSURL *_spatialOvercaptureVideoURL;
    NSURL *_adjustmentBaseVideoURL;
    NSURL *_originalAdjustmentDataURL;
    NSDictionary *_propertyList;
    NSMutableDictionary *_metadata;
    NSString *_livePhotoOriginalPairingIdentifier;
    CDStruct_1b6d18a9 _livePhotoOriginalImageDisplayTime;
    CDStruct_1b6d18a9 _livePhotoOriginalVideoDuration;
}

+ (id)currentFormatVersion;
@property(nonatomic) CDStruct_1b6d18a9 livePhotoOriginalVideoDuration; // @synthesize livePhotoOriginalVideoDuration=_livePhotoOriginalVideoDuration;
@property(nonatomic) CDStruct_1b6d18a9 livePhotoOriginalImageDisplayTime; // @synthesize livePhotoOriginalImageDisplayTime=_livePhotoOriginalImageDisplayTime;
@property(copy, nonatomic) NSString *livePhotoOriginalPairingIdentifier; // @synthesize livePhotoOriginalPairingIdentifier=_livePhotoOriginalPairingIdentifier;
@property(readonly, nonatomic) BOOL didReadOriginalPairedVideoMetadata; // @synthesize didReadOriginalPairedVideoMetadata=_didReadOriginalPairedVideoMetadata;
@property(readonly, copy, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSDictionary *propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) NSURL *originalAdjustmentDataURL; // @synthesize originalAdjustmentDataURL=_originalAdjustmentDataURL;
@property(readonly, nonatomic) NSURL *adjustmentBaseVideoURL; // @synthesize adjustmentBaseVideoURL=_adjustmentBaseVideoURL;
@property(readonly, nonatomic) NSURL *spatialOvercaptureVideoURL; // @synthesize spatialOvercaptureVideoURL=_spatialOvercaptureVideoURL;
@property(readonly, nonatomic) NSURL *spatialOvercapturePairedVideoURL; // @synthesize spatialOvercapturePairedVideoURL=_spatialOvercapturePairedVideoURL;
@property(readonly, nonatomic) NSURL *spatialOvercapturePhotoURL; // @synthesize spatialOvercapturePhotoURL=_spatialOvercapturePhotoURL;
@property(readonly, nonatomic) NSURL *adjustmentBasePairedVideoURL; // @synthesize adjustmentBasePairedVideoURL=_adjustmentBasePairedVideoURL;
@property(readonly, nonatomic) NSURL *fullSizePairedVideoURL; // @synthesize fullSizePairedVideoURL=_fullSizePairedVideoURL;
@property(readonly, nonatomic) NSURL *pairedVideoURL; // @synthesize pairedVideoURL=_pairedVideoURL;
@property(readonly, nonatomic) NSURL *adjustmentBasePhotoURL; // @synthesize adjustmentBasePhotoURL=_adjustmentBasePhotoURL;
@property(readonly, nonatomic) NSURL *adjustmentDataURL; // @synthesize adjustmentDataURL=_adjustmentDataURL;
@property(readonly, nonatomic) NSURL *fullSizeVideoURL; // @synthesize fullSizeVideoURL=_fullSizeVideoURL;
@property(readonly, nonatomic) NSURL *fullSizePhotoURL; // @synthesize fullSizePhotoURL=_fullSizePhotoURL;
@property(readonly, nonatomic) NSURL *alternatePhotoURL; // @synthesize alternatePhotoURL=_alternatePhotoURL;
@property(readonly, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
// - (void).cxx_destruct;
- (id)writeDowngradedRepresentationToDirectory:(id)arg1 error:(id )arg2;
- (id)initWithOriginalVideoURL:(id)arg1 fullSizeRenderedVideoURL:(id)arg2 adjustmentBaseVideoURL:(id)arg3 spatialOvercaptureVideoURL:(id)arg4 adjustmentsURL:(id)arg5 originalAdjustmentsURL:(id)arg6 mediaSubtypes:(NSUInteger)arg7 playbackStyle:(long long)arg8 playbackVariation:(NSUInteger)arg9 reframeVariation:(NSUInteger)arg10;
- (id)initWithOriginalPhotoURL:(id)arg1 alternatePhotoURL:(id)arg2 fullSizePhotoURL:(id)arg3 adjustmentBaseFullSizePhotoURL:(id)arg4 spatialOvercapturePhotoURL:(id)arg5 originalPairedVideoURL:(id)arg6 fullSizePairedVideoURL:(id)arg7 adjustmentBaseFullSizePairedVideoURL:(id)arg8 spatialOvercapturePairedVideoURL:(id)arg9 fullSizeVideoURL:(id)arg10 adjustmentsURL:(id)arg11 originalAdjustmentsURL:(id)arg12 mediaSubtypes:(NSUInteger)arg13 playbackStyle:(long long)arg14 playbackVariation:(NSUInteger)arg15 videoComplementVisibilityState:(unsigned short)arg16 reframeVariation:(NSUInteger)arg17;
- (BOOL)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 writtenFileURL:(id )arg4 error:(id )arg5;
- (BOOL)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 writtenFileURL:(id )arg3 error:(id )arg4;
- (id)createAssetBundleWritingErrorWithDescription:(id)arg1;
- (BOOL)_verifyFileSourceExistsAtURL:(id)arg1 error:(id )arg2;
- (BOOL)_pathExtension:(id)arg1 matchesUTIType:(struct __CFString )arg2 error:(id )arg3;
- (BOOL)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 updateManifest:(id)arg4 bundlePathKey:(id)arg5 verifyUTIType:(struct __CFString )arg6 error:(id )arg7;
- (id)urlsByPathKey;
- (BOOL)writeToBundleAtURL:(id)arg1 error:(id )arg2;
- (BOOL)linkOrCopyURL:(id)arg1 toURL:(id)arg2 forceCopy:(BOOL)arg3 error:(id )arg4;
@property(nonatomic) BOOL spatialOvercaptureResourcesPurgeable;
@property(retain, nonatomic) id libraryLocation;
@property(copy, nonatomic) NSDate *libraryCreationDate;
@property(copy, nonatomic) NSString *assetTitle;
@property(copy, nonatomic) NSString *assetDescription;
@property(copy, nonatomic) NSSet *keywordTitles;
- (BOOL)isMediaSubtype:(NSUInteger)arg1;
- (void)_readLivePhotoVideoMetadataIfNeeded;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoImageDisplayTime;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property(readonly, nonatomic) NSUInteger reframeVariation;
@property(readonly, nonatomic) unsigned short videoComplementVisibilityState;
@property(readonly, nonatomic) NSUInteger playbackVariation;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long playbackStyle;
- (id)initWithAssetBundleAtURL:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)init;

@end
