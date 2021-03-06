//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContact.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class CAppBrandInfo, COpenIMInfo, ChatRoomData, ChatRoomDetail, NSArray, NSDictionary, NSRecursiveLock, NSString, SubscriptBrandInfo;

@interface CContact : CBaseContact <PBCoding, NSCoding>
{
    unsigned int m_uiChatRoomStatus;
    NSString *m_nsChatRoomMemList;
    NSString *m_nsChatRoomAdminList;
    unsigned int m_uiChatRoomAccessType;
    unsigned int m_uiChatRoomMaxCount;
    unsigned int m_uiChatRoomVersion;
    ChatRoomDetail *m_ChatRoomDetail;
    NSString *m_nsChatRoomData;
    ChatRoomData *m_ChatRoomData;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    unsigned int m_uiCertificationFlag;
    NSString *m_nsCertificationInfo;
    NSString *m_nsOwner;
    NSString *m_nsFBNickName;
    NSString *m_nsFBID;
    unsigned int m_uiNeedUpdate;
    NSString *m_nsWCBGImgObjectID;
    int m_iWCFlag;
    NSString *m_pcWCBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    unsigned int m_uiBrandSubscriptionSettings;
    SubscriptBrandInfo *m_subBrandInfo;
    NSString *m_nsBrandIconUrl;
    _Bool m_isExtInfoValid;
    NSDictionary *externalInfoJSONCache;
    _Bool m_isShowRedDot;
    NSString *m_nsMobileHash;
    NSString *m_nsMobileFullHash;
    NSString *m_nsLinkedInID;
    NSString *m_nsLinkedInName;
    NSString *m_nsLinkedInPublicUrl;
    unsigned int m_uiDeleteFlag;
    NSString *m_nsDescription;
    NSString *m_nsCardUrl;
    NSString *m_nsWorkID;
    NSString *m_nsLabelIDList;
    NSArray *m_arrPhoneItem;
    NSRecursiveLock *m_lockForChatRoomData;
    CAppBrandInfo *_appBrandInfo;
    NSString *m_nsSourceExtInfo;
    _Bool _m_bFromNewDB;
    _Bool _m_hasNewBizMsg;
    unsigned int _m_uiLastUpdate;
    unsigned int _m_uiMetaFlag;
    unsigned int _m_uiDebugModeType;
    unsigned int _m_uiWxAppOpt;
    unsigned int _uiLastUpdateAppVersionInfoTime;
    NSString *openIMAppid;
    COpenIMInfo *openIMInfo;
    NSDictionary *_m_dicWeiDianInfo;
    NSString *_m_nsWeiDianInfo;
}

+ (id)GetChatRoomAdmin:(id)arg1;
+ (id)GetChatRoomAdminUserName:(id)arg1;
+ (void)HandleChatMemUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (void)HandleUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (id)SubscriptedBrandsFromString:(id)arg1;
+ (id)genChatRoomName:(id)arg1;
+ (id)genChatRoomName:(id)arg1 appendTail:(_Bool)arg2;
+ (id)getChatRoomMember:(id)arg1;
+ (unsigned long long)getChatRoomMemberCount:(id)arg1;
+ (id)getChatRoomMemberUserName:(id)arg1;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1;
+ (id)getMicroBlogUsrDisplayName:(id)arg1;
+ (void)initialize;
+ (_Bool)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
+ (_Bool)isWeAppUserName:(id)arg1;
+ (id)parseContactKey:(id)arg1;
- (void).cxx_destruct;
- (_Bool)IsAddFromLbs;
- (_Bool)IsAddFromShake;
- (_Bool)IsUserInChatRoom:(id)arg1;
@property(retain, nonatomic) CAppBrandInfo *appBrandInfo; // @synthesize appBrandInfo=_appBrandInfo;
- (id)bizMenuInfoFromContact;
- (id)brandPrivileges;
- (id)brandUrls;
- (_Bool)canSupportMessageNotify;
- (long long)compareForFavourGroup:(id)arg1;
- (_Bool)containKFWorkerInfo;
- (_Bool)copyFieldFromContact:(id)arg1;
- (_Bool)copyPatialFieldFromContact:(id)arg1;
@property(readonly, nonatomic) NSString *customSectionHeader;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalInfoJSONCache;
- (id)getAppBrandInfo;
- (long long)getAudioPlayType;
- (id)getBrandAppId;
- (id)getBrandBusinessScope;
- (int)getBrandContactType;
- (id)getBrandEvaluateCount;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (id)getBrandMerchantRatings;
- (id)getBrandMerchantSecurity;
- (id)getBrandMerchantSecurityUrl;
- (id)getBrandProfileBindWeAppList;
- (id)getBrandRegisterSourceBody;
- (id)getBrandRegisterSourceIntroUrl;
- (_Bool)getBrandRegisterSourceIsClose;
- (id)getBrandTrademarkName;
- (id)getBrandTrademarkUrl;
- (id)getBrandUrlValueForKey:(id)arg1;
- (id)getBrandVerifySourceDescription;
- (id)getBrandVerifySourceIntroUrl;
- (id)getBrandVerifySourceName;
- (unsigned int)getBrandVerifySourceType;
- (id)getBrandVerifySubTitle;
- (id)getChatRoomMemberDisplayName:(id)arg1;
- (id)getChatRoomMemberNickName:(id)arg1;
- (id)getChatRoomMembrGroupNickName:(id)arg1;
- (unsigned int)getConferenceContactExpireTime;
- (id)getConferenceVerifyButtonTitle;
- (id)getConferenceVerifyPromptTitle;
- (long long)getConnectorMsgType;
- (id)getCustomizeMenu;
- (id)getEnterpriseBrandFrozenWording;
- (id)getEnterpriseMainBrandUserName;
- (id)getEnterpriseSubBrandChatExtUrl;
- (unsigned int)getEnterpriseSubBrandChildType;
- (id)getEnterpriseSubBrandUrl;
- (id)getExternalInfoDictionary;
- (id)getFixBrandUrlValueForKey:(id)arg1;
- (unsigned int)getFunctionFlag;
- (long long)getInteractiveMode;
- (_Bool)getIsTrademarkProtection;
- (id)getLabelIDList;
- (id)getMainPageUrl;
- (id)getMigrationNicknameList;
- (id)getMobileDisplayName;
- (id)getMobileList;
- (id)getMobileNumString;
- (id)getMsgSendOpEntry;
- (id)getNearFieldDesc;
- (id)getNewChatroomData;
- (id)getNormalContactDisplayDesc;
- (long long)getReportLocationType;
- (long long)getScanQRCodeType;
- (id)getSpecifyWorkerOpenID;
- (id)getSupportEmoticonLinkPrefix;
- (id)getTitleKey:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (long long)getWeAppBizWxaOpenFlag;
- (id)getWeAppID;
- (_Bool)hasContactDisplayUsrName;
- (_Bool)hasMatchHashPhone;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModContact:(id)arg1;
- (_Bool)isAccountDeleted;
- (_Bool)isAdmin;
- (_Bool)isBlockWeAppSessionMessage;
- (_Bool)isBlockWeAppTemplateMessage;
- (_Bool)isBrandContact;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isChatroomNeedAccessVerify;
- (_Bool)isConferenceContactExpired;
- (_Bool)isContactCanReceiveSpeexVoice;
- (_Bool)isContactFrozen;
- (_Bool)isContactSessionTop;
- (_Bool)isContactTypeShouldDelete;
- (_Bool)isEnterpriseBrand;
- (_Bool)isEnterpriseChatSubBrand;
- (_Bool)isEnterpriseDisableBrand;
- (_Bool)isEnterpriseMainBrand;
- (_Bool)isEnterpriseSubBrand;
- (_Bool)isEnterpriseWebSubBrand;
- (_Bool)isForcedAttentionBrand;
- (_Bool)isHardDeviceBrand;
- (_Bool)isHardDeviceHideSubtitle;
- (_Bool)isHardDeviceTestBrand;
- (_Bool)isHasMobile;
- (_Bool)isHasWeiDian;
- (_Bool)isHolderContact;
- (_Bool)isIgnoreBrandContat;
- (_Bool)isInternalMyDeviceBrand;
- (_Bool)isInternalSportBrand;
- (_Bool)isLocalizedContact;
- (_Bool)isMyContact;
- (_Bool)isNormalBrand;
- (_Bool)isNormalContact;
- (_Bool)isNormalFriendContact;
- (_Bool)isOpenMainPage;
- (_Bool)isOwner;
- (_Bool)isProvideLocationSwitchOn;
- (_Bool)isReceiveMessageSwitchOn;
- (_Bool)isServiceBrand;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImgInMsg;
- (_Bool)isShowLinkedIn;
- (_Bool)isShowNewProfile;
- (_Bool)isShowToolBarInMsg;
- (_Bool)isSubscriptionBrand;
- (_Bool)isSupportPublicWifi;
- (_Bool)isVerified;
- (_Bool)isVerifiedBrandContact;
- (_Bool)isWeAppContact;
- (_Bool)isWeixinSingleConatct;
@property(retain, nonatomic) ChatRoomData *m_ChatRoomData; // @synthesize m_ChatRoomData;
@property(retain, nonatomic) ChatRoomDetail *m_ChatRoomDetail; // @synthesize m_ChatRoomDetail;
@property(retain, nonatomic) NSArray *m_arrPhoneItem; // @synthesize m_arrPhoneItem;
@property(nonatomic) _Bool m_bFromNewDB; // @synthesize m_bFromNewDB=_m_bFromNewDB;
@property(readonly, nonatomic) NSDictionary *m_dicWeiDianInfo; // @synthesize m_dicWeiDianInfo=_m_dicWeiDianInfo;
@property(nonatomic) _Bool m_hasNewBizMsg; // @synthesize m_hasNewBizMsg=_m_hasNewBizMsg;
@property(nonatomic) int m_iWCFlag; // @synthesize m_iWCFlag;
@property(nonatomic) _Bool m_isExtInfoValid; // @synthesize m_isExtInfoValid;
@property(nonatomic) _Bool m_isShowRedDot; // @synthesize m_isShowRedDot;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsCardUrl; // @synthesize m_nsCardUrl;
@property(retain, nonatomic) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(retain, nonatomic) NSString *m_nsChatRoomAdminList; // @synthesize m_nsChatRoomAdminList;
@property(retain, nonatomic) NSString *m_nsChatRoomData; // @synthesize m_nsChatRoomData;
@property(retain, nonatomic) NSString *m_nsChatRoomMemList; // @synthesize m_nsChatRoomMemList;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_nsFBID; // @synthesize m_nsFBID;
@property(retain, nonatomic) NSString *m_nsFBNickName; // @synthesize m_nsFBNickName;
@property(retain, nonatomic) NSString *m_nsLabelIDList; // @synthesize m_nsLabelIDList;
@property(retain, nonatomic) NSString *m_nsLinkedInID; // @synthesize m_nsLinkedInID;
@property(retain, nonatomic) NSString *m_nsLinkedInName; // @synthesize m_nsLinkedInName;
@property(retain, nonatomic) NSString *m_nsLinkedInPublicUrl; // @synthesize m_nsLinkedInPublicUrl;
@property(retain, nonatomic) NSString *m_nsMobileFullHash; // @synthesize m_nsMobileFullHash;
@property(retain, nonatomic) NSString *m_nsMobileHash; // @synthesize m_nsMobileHash;
@property(retain, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsSourceExtInfo; // @synthesize m_nsSourceExtInfo;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(retain, nonatomic) NSString *m_nsWeiDianInfo; // @synthesize m_nsWeiDianInfo=_m_nsWeiDianInfo;
@property(retain, nonatomic) NSString *m_nsWorkID; // @synthesize m_nsWorkID;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(retain, nonatomic) SubscriptBrandInfo *m_subBrandInfo; // @synthesize m_subBrandInfo;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag;
@property(nonatomic) unsigned int m_uiChatRoomAccessType; // @synthesize m_uiChatRoomAccessType;
@property(nonatomic) unsigned int m_uiChatRoomMaxCount; // @synthesize m_uiChatRoomMaxCount;
@property(nonatomic) unsigned int m_uiChatRoomStatus; // @synthesize m_uiChatRoomStatus;
@property(nonatomic) unsigned int m_uiChatRoomVersion; // @synthesize m_uiChatRoomVersion;
@property(nonatomic) unsigned int m_uiDebugModeType; // @synthesize m_uiDebugModeType=_m_uiDebugModeType;
@property(nonatomic) unsigned int m_uiDeleteFlag; // @synthesize m_uiDeleteFlag;
@property(nonatomic) unsigned int m_uiLastUpdate; // @synthesize m_uiLastUpdate=_m_uiLastUpdate;
@property(nonatomic) unsigned int m_uiMetaFlag; // @synthesize m_uiMetaFlag=_m_uiMetaFlag;
@property(nonatomic) unsigned int m_uiNeedUpdate; // @synthesize m_uiNeedUpdate;
@property(nonatomic) unsigned int m_uiWxAppOpt; // @synthesize m_uiWxAppOpt=_m_uiWxAppOpt;
- (_Bool)needShowUnreadCountOnSession;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid;
@property(readonly, nonatomic) NSString *openIMDesc;
@property(readonly, nonatomic) NSString *openIMDescIcon;
@property(retain, nonatomic) COpenIMInfo *openIMInfo; // @synthesize openIMInfo;
- (id)openIMUIDesc;
@property(readonly, nonatomic) NSString *openimAcctType;
@property(readonly, nonatomic) NSString *openimDescQuanPin;
@property(readonly, nonatomic) NSString *openimDescShortPY;
@property(readonly, nonatomic) NSString *openimIconURL;
@property(readonly, nonatomic) NSString *openimIntroURL;
@property(readonly, nonatomic) NSString *openimName;
- (void)setChatRoomDataWithoutEmojiChange:(id)arg1;
- (void)setChatStatusNotifyOpen:(_Bool)arg1;
- (void)setExternalInfoJSONCache:(id)arg1;
- (void)setProvideLocationSwitch:(_Bool)arg1;
- (void)setReceiveMessageSwitch:(_Bool)arg1;
- (void)setSignatureWithoutEmojiChange:(id)arg1;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime=_uiLastUpdateAppVersionInfoTime;
- (_Bool)shouldShowWeAppInChatSettingView;
- (void)tryLoadExtInfo;
- (void)updateWithBizAttrChanged:(id)arg1;
- (id)xmlForMessageWrapContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

