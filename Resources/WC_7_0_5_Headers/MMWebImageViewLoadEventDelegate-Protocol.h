//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMImageLoaderReqContext, NSMutableDictionary, NSString;

@protocol MMWebImageViewLoadEventDelegate <NSObject>

@optional
- (void)onLoadEvent:(int)arg1 url:(NSString *)arg2 reqContext:(MMImageLoaderReqContext *)arg3 extraInfo:(NSMutableDictionary *)arg4;
@end

