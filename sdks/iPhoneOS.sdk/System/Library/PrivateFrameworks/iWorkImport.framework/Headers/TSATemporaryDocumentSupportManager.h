//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUTemporaryDirectoryManager.h>

__attribute__((visibility("hidden")))
@interface TSATemporaryDocumentSupportManager : TSUTemporaryDirectoryManager
{
}

+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (id)baseDirectoryURL;
- (id)newDirectoryForDocumentUUID:(id)arg1;

@end
