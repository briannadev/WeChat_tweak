//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WAPermissionResult, WAWebViewPluginScheduler, WxaExternalInfo;

@protocol WAWebViewJSLogicDelegate <NSObject>

@optional
- (_Bool)checkRunModeOnWebview:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3;
- (unsigned int)getAppType;
- (unsigned long long)getAppVersion;
- (unsigned int)getCurTaskRunningState;
- (NSString *)getCurrentAppId;
- (unsigned int)getDebugModeType;
- (NSString *)getInstanceId;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 byTempPermission:(NSArray *)arg2;
- (WAWebViewPluginScheduler *)getPluginScheduler;
- (WxaExternalInfo *)getWxaExternalInfo;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isOpenDebugAndVConsole;
- (_Bool)isPreloadWebView;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
@end
