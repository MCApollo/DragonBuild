//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
}

@property(retain, nonatomic) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end
