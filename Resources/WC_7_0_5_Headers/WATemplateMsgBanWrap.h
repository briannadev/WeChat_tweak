//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WATemplateMsgBanWrap : MMObject <PBCoding>
{
    _Bool isBanned;
    NSString *appUsername;
    NSString *appNickname;
    NSString *avatarURLString;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appNickname; // @synthesize appNickname;
@property(copy, nonatomic) NSString *appUsername; // @synthesize appUsername;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

