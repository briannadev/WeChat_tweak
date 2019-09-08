//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCPayBusiF2FZeroCallBackCgiDelegate.h"

@class BusiF2FZeroCallBackReq, NSString, WCPayBusiF2FZeroCallBackCgi;

@interface WCPayBizF2FZeroCallBackAutoRetryCgi : NSObject <WCPayBusiF2FZeroCallBackCgiDelegate>
{
    unsigned int _m_retryTimes;
    unsigned int _m_currentRetryTimes;
    double _m_retryInterval;
    id <WCPayBusiF2FZeroCallBackCgiDelegate> _m_cgiDelegate;
    WCPayBusiF2FZeroCallBackCgi *_m_zeroPayCgi;
    BusiF2FZeroCallBackReq *_m_request;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 retryTimes:(unsigned int)arg2 retryInterval:(unsigned int)arg3;
@property(nonatomic) __weak id <WCPayBusiF2FZeroCallBackCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(nonatomic) unsigned int m_currentRetryTimes; // @synthesize m_currentRetryTimes=_m_currentRetryTimes;
@property(retain, nonatomic) BusiF2FZeroCallBackReq *m_request; // @synthesize m_request=_m_request;
@property(nonatomic) double m_retryInterval; // @synthesize m_retryInterval=_m_retryInterval;
@property(nonatomic) unsigned int m_retryTimes; // @synthesize m_retryTimes=_m_retryTimes;
@property(retain, nonatomic) WCPayBusiF2FZeroCallBackCgi *m_zeroPayCgi; // @synthesize m_zeroPayCgi=_m_zeroPayCgi;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)arg1;
- (void)startFirstRequest;
- (void)startRequest:(id)arg1;
- (void)startRetryRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
