//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class EncryptLocation, NSString;

@interface Event : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(nonatomic) unsigned int bizId; // @dynamic bizId;
@property(nonatomic) unsigned int bizScene; // @dynamic bizScene;
@property(retain, nonatomic) EncryptLocation *location; // @dynamic location;
@property(nonatomic) unsigned int payChannel; // @dynamic payChannel;
@property(nonatomic) unsigned int payScene; // @dynamic payScene;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

