//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardTpInfoItem : MMObject
{
    NSString *_cardTpID;
    NSString *_cardCode;
    NSString *_openCardParams;
    NSString *_appid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *cardCode; // @synthesize cardCode=_cardCode;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
- (void)dealloc;
@property(retain, nonatomic) NSString *openCardParams; // @synthesize openCardParams=_openCardParams;

@end

