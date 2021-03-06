//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber;

@interface QStatisticer : NSObject
{
    _Bool _loadSuccess;
    int _configUpdateFailCount;
    double _create;
    NSMutableDictionary *_root;
    NSMutableDictionary *_mapLoad;
    NSMutableDictionary *_configUpdate;
    NSMutableDictionary *_oversea;
    NSNumber *_loadSuccessTime;
    NSNumber *_firstLoadTime;
    long long _lastWorldTileCount;
}

- (void).cxx_destruct;
- (id)addTimeForUserInfo:(id)arg1;
- (void)appendUniqueInfo:(id)arg1 to:(id)arg2 forKey:(id)arg3 maxCount:(int)arg4 equalPredicator:(CDUnknownBlockType)arg5;
- (void)beginRecord;
@property(retain, nonatomic) NSMutableDictionary *configUpdate; // @synthesize configUpdate=_configUpdate;
@property(nonatomic) int configUpdateFailCount; // @synthesize configUpdateFailCount=_configUpdateFailCount;
@property(nonatomic) double create; // @synthesize create=_create;
- (id)currentRelativeTime;
- (void)dealloc;
- (void)finishRecord;
@property(retain, nonatomic) NSNumber *firstLoadTime; // @synthesize firstLoadTime=_firstLoadTime;
- (id)init;
@property(nonatomic) long long lastWorldTileCount; // @synthesize lastWorldTileCount=_lastWorldTileCount;
@property(nonatomic) _Bool loadSuccess; // @synthesize loadSuccess=_loadSuccess;
@property(retain, nonatomic) NSNumber *loadSuccessTime; // @synthesize loadSuccessTime=_loadSuccessTime;
@property(retain, nonatomic) NSMutableDictionary *mapLoad; // @synthesize mapLoad=_mapLoad;
@property(retain, nonatomic) NSMutableDictionary *oversea; // @synthesize oversea=_oversea;
- (void)recordMapLoadCallbackEvent;
- (void)recordMapLoadConfigUpdate:(_Bool)arg1;
- (void)recordMaploadConfigError:(id)arg1 userInfo:(id)arg2;
- (void)recordMaploadTileError:(id)arg1;
- (void)recordOverseaEvent:(id)arg1 value:(long long)arg2;
- (id)relativeTime:(double)arg1;
@property(retain, nonatomic) NSMutableDictionary *root; // @synthesize root=_root;
- (void)setupLegacyOversea;

@end

