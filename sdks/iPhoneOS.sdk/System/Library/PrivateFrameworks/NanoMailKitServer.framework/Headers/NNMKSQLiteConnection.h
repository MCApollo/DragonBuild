//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NNMKSQLiteConnection : NSObject
{
    BOOL _isInTransaction;
    struct sqlite3 _db;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSMutableDictionary *_cachedPreparedStatementsBySQLPattern;
}

+ (BOOL)errorCodeMeansCorruptedDatabase:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern; // @synthesize cachedPreparedStatementsBySQLPattern=_cachedPreparedStatementsBySQLPattern;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(nonatomic) BOOL isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) struct sqlite3 db; // @synthesize db=_db;
// - (void).cxx_destruct;
- (int)_runRetryingIfNeeded:(id /* CDUnknownBlockType */)arg1;
- (id)_lastErrorMessage;
- (int)_lastErrorCode;
- (int)_executeSQL:(id)arg1;
- (int)_stepPreparedStatement:(struct sqlite3_stmt )arg1;
- (struct sqlite3_stmt )_preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2;
- (void)_closeDatabase;
- (BOOL)_openDatabaseWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int )arg3;
- (BOOL)tableExists:(id)arg1 inDatabase:(id)arg2;
- (id)lastErrorMessage;
- (int)lastErrorCode;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginTransaction;
- (int)executeSQL:(id)arg1;
- (int)stepPreparedStatement:(struct sqlite3_stmt )arg1;
- (struct sqlite3_stmt )preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2;
- (struct sqlite3_stmt )preparedStatementForPattern:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int )arg3;

@end
