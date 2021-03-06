//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ITopStoryColikeExt.h"

@class MMTableViewInfo, NSString;

@interface WSWowBlackListSettingViewController : MMUIViewController <ITopStoryColikeExt>
{
    _Bool _isRequestingHide;
    _Bool _isRequestingBlock;
    _Bool _isRequestHideByClick;
    _Bool _isRequestBlockByClick;
    MMTableViewInfo *_tableViewInfo;
    NSString *_dontSeeCountStr;
    NSString *_dontAllowSeeCountStr;
}

- (void).cxx_destruct;
- (id)appendUrlString:(id)arg1 withKey:(id)arg2 stringValue:(id)arg3;
- (void)dealloc;
@property(retain, nonatomic) NSString *dontAllowSeeCountStr; // @synthesize dontAllowSeeCountStr=_dontAllowSeeCountStr;
@property(retain, nonatomic) NSString *dontSeeCountStr; // @synthesize dontSeeCountStr=_dontSeeCountStr;
- (void)fixLoadingRect;
- (id)init;
- (void)initData;
- (void)initNavBar;
- (void)initView;
@property(nonatomic) _Bool isRequestBlockByClick; // @synthesize isRequestBlockByClick=_isRequestBlockByClick;
@property(nonatomic) _Bool isRequestHideByClick; // @synthesize isRequestHideByClick=_isRequestHideByClick;
@property(nonatomic) _Bool isRequestingBlock; // @synthesize isRequestingBlock=_isRequestingBlock;
@property(nonatomic) _Bool isRequestingHide; // @synthesize isRequestingHide=_isRequestingHide;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (void)openDontAllowSomebodySee:(id)arg1;
- (void)openDontSeeSomebody:(id)arg1;
- (void)openOpnionFeedback:(id)arg1;
- (void)reloadTableView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

