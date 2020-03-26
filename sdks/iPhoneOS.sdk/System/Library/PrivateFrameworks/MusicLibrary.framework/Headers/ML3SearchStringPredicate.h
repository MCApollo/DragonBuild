//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate
{
    NSArray *_properties;
    NSString *_searchString;
}

+ (id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;

@end
