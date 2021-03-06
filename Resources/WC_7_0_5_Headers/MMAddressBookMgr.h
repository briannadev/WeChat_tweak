//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class AddressBookArchive, NSLocale, NSMutableArray, NSMutableDictionary, NSString;

@interface MMAddressBookMgr : MMService <PBMessageObserverDelegate, MMService, IMsgExt>
{
    NSMutableArray *m_phoneContacts;
    NSMutableDictionary *m_phoneAddressBooks;
    NSMutableDictionary *m_emailAddressBooks;
    AddressBookArchive *m_addressBookArchive;
    _Bool m_isSyningAddressBook;
    _Bool m_isFirstSync;
    _Bool m_bLocalAddressBookChanged;
    _Bool m_bShouldResponeAddressBookChange;
    NSLocale *m_curLocale;
    NSMutableArray *m_countryCodes;
    _Bool m_bTempCanSyncAddressBook;
    _Bool m_bHasLoadAddressBook;
}

+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3;
+ (id)getDefaultPhoneLabel;
+ (_Bool)isBindMobile;
+ (_Bool)isMobileVerifiedForStatic;
+ (_Bool)isPhoneUploaded:(id)arg1;
+ (id)validEmail:(id)arg1;
+ (id)validPhoneNumber:(id)arg1;
- (void).cxx_destruct;
- (void)BlockLoadAddressMobile:(id)arg1 Email:(id)arg2 Status:(unsigned int *)arg3;
- (_Bool)CheckPhoneInAddressBook:(id)arg1;
- (void)LoadAddressBookArchive;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)SaveAddressBookArchive;
- (void)addNotificationCenterObservers;
- (void)addToCacheInMainThreadWithPhone:(id)arg1 email:(id)arg2 phoneContacts:(id)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)canSyncAddressBook;
- (void)checkReloadByLocalAddressBookChanged;
- (void)clearLocalSnapshot;
- (void)dealloc;
- (void)doLoadFromDBUseBlock:(_Bool)arg1;
- (id)findCountryWrapFromCountryCode:(id)arg1;
- (id)findCountryWrapFromCountryCode:(id)arg1 WithLocaleIdentifier:(id)arg2;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (id)getAddressBookForPhone:(id)arg1;
- (unsigned int)getAddressBookStatus;
- (id)getAddressBooks;
- (id)getAllCountryCode;
- (id)getAllCountryCodeForLocaleIdentifier:(id)arg1;
- (id)getCurCountryCode;
- (id)getNewMD5Emails;
- (id)getNewPhones;
- (id)getNickNameForPhone:(id)arg1;
- (id)getPhoneAddressBooks;
- (id)getPhoneContacts;
- (id)init;
- (_Bool)isAddressBookLoaded;
- (_Bool)isMobileVerified;
- (void)load;
@property(nonatomic) _Bool m_bShouldResponeAddressBookChange; // @synthesize m_bShouldResponeAddressBookChange;
@property(nonatomic) _Bool m_bTempCanSyncAddressBook; // @synthesize m_bTempCanSyncAddressBook;
- (id)newContactStore;
- (id)newContactStore:(unsigned int *)arg1;
- (void)onContactStoreDidChange:(id)arg1;
- (void)onServiceInit;
- (void)removeNotificationCenterObservers;
- (void)revertLocalAddressBook;
- (void)safeSyncedData:(id)arg1;
- (void)setCanSyncAddressBook:(_Bool)arg1;
- (void)setLocalAddressBookChanged;
- (void)tryLoad;
- (void)trySyncAddressBook;
- (void)updateUploadedList;
- (void)uploadNewPhones:(id)arg1 withNewMD5Emails:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

