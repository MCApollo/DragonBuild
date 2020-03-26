//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, NSString;
@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer>
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSString *_logKey;
}

+ (id)_processURLResult:(id)arg1;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)initWithBagContract:(id)arg1;
- (id)initWithBag:(id)arg1;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_currentCachedFamilyInfo;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id )arg2;
- (id)performFamilyInfoLookup;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;

@end
