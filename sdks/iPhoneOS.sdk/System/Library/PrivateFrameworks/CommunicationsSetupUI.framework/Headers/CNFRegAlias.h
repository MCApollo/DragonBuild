//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject
{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
    long long _givenAliasType;
    BOOL _selectedDeviceAlias;
    NSString *_deviceAliasIdentifier;
}

@property(nonatomic) NSString *deviceAliasIdentifier; // @synthesize deviceAliasIdentifier=_deviceAliasIdentifier;
@property(nonatomic, getter=isSelectedDeviceAlias) BOOL selectedDeviceAlias; // @synthesize selectedDeviceAlias=_selectedDeviceAlias;
@property(nonatomic) long long givenAliasType; // @synthesize givenAliasType=_givenAliasType;
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalPhoneNumberAlias;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (long long)validationErrorReason;
- (long long)validationStatus;
- (BOOL)validate;
- (BOOL)isDeviceAlias;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
@property(readonly, nonatomic) long long type; // @dynamic type;
@property(readonly, retain, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(BOOL)arg3 deviceAliasIdentifier:(id)arg4;

@end
