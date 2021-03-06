//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EditBottleProfileDelegate.h"
#import "MMCPLabelDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CBottle, CBottleContact, MMHDHeadImageView, MMHeadImageView, MMTableViewInfo, MMUIView, NSString, UIImage;

@interface BottleProfileViewController : MMUIViewController <MMTableViewInfoDelegate, MMCPLabelDelegate, PBMessageObserverDelegate, EditBottleProfileDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMHeadImageView *m_headImage;
    NSString *m_fromRegionText;
    NSString *m_regionText;
    UIImage *m_sexImage;
    MMHDHeadImageView *m_HDHeadView;
    CBottleContact *m_contact;
    NSString *m_cpKeyForNickname;
    _Bool m_isNickNameUnsafe;
    MMUIView *m_tableBackgroundView;
    CBottle *_m_bottle;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SaveImg:(id)arg1;
- (void)addSignatureCellAtSection;
- (void)confirmExpose:(unsigned int)arg1;
- (void)dealloc;
- (struct WCTableViewSectionManager *)getSection;
- (id)init;
- (void)initExposeView;
- (void)initFooterView;
- (void)initHDHeadImage;
- (void)initHeaderView;
- (void)initSayHelloToContactBtn;
- (void)initView;
- (id)initWithContact:(id)arg1 Bottle:(id)arg2;
@property(retain, nonatomic) CBottle *m_bottle; // @synthesize m_bottle=_m_bottle;
@property(retain, nonatomic) CBottleContact *m_contact; // @synthesize m_contact;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onEdit:(id)arg1;
- (void)onExpose;
- (void)onRestoreCPLabel:(id)arg1;
- (void)onSayHello;
- (void)reloadTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)updateCPState;
- (void)updateInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

