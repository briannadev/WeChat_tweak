//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCLazyInitObjectProtocol.h"

@class MMLanguageCache, NSBundle, NSString;

@interface MMLanguageMgr : MMService <WCLazyInitObjectProtocol, MMService>
{
    NSString *m_nsCurSystemLanguage;
    NSString *m_curLanguage;
    NSBundle *m_curBundle;
    NSBundle *m_updateBundle;
    NSBundle *m_backupBundle;
    NSBundle *m_updateBackupBundle;
    _Bool bDownloadPackageRightNow;
    MMLanguageCache *m_lanCache;
    _Bool m_lanCacheIsSaved;
    _Bool m_firstInitLanguage;
    _Bool haveLazyInit;
}

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void).cxx_destruct;
- (void)ClearOlderVersionData;
- (_Bool)curLanguageIsChinese;
- (_Bool)curLanguageIsChineseTraditional;
- (_Bool)curLanguageIsEnglish;
- (id)getBackUpLanguage;
- (id)getCacheString:(id)arg1;
- (id)getCurBundle;
- (id)getCurLanguage;
- (id)getCurLanguageDisplayName;
- (id)getCurSystemLanguage;
- (id)getLangPackageFileForLang:(id)arg1;
- (id)getLangPackagePathForLang:(id)arg1;
- (id)getLangPackageRootPath;
- (id)getLanguagePath;
- (id)getRealCurSystemLanguage;
- (id)getStringForCurLanguage:(id)arg1;
- (id)getStringForCurLanguageWithBackupBundle:(id)arg1 table:(id)arg2;
- (id)getStringForLanguage:(id)arg1 withID:(id)arg2;
- (id)getSupportedLanguageDisplayNames;
- (id)getSupportedLanguages;
- (void)goToLazyInitObject;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (_Bool)ifNeedBackupBundle;
- (id)init;
- (void)initBackUpLanguage;
- (void)initCache;
- (void)initLanguage;
- (void)internalChangeCurLanguage;
- (id)internalGetCurLanguage;
- (void)internalSetCurLanguage:(id)arg1;
- (_Bool)isLanaguageValid;
- (id)isSupportedLanguage:(id)arg1;
- (_Bool)isVersionString:(id)arg1 olderThanMajor:(unsigned int *)arg2 minor:(unsigned int *)arg3 minorex:(unsigned int *)arg4;
- (id)p_getStringForCurLanguage:(id)arg1;
- (void)refreshNewVersionForCurLanguage:(id)arg1 fromViewScene:(unsigned int)arg2;
- (void)resetString:(id)arg1 for:(id)arg2;
- (void)setCurLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
- (void)setCurLanguage:(id)arg1 shouldChangeMainFrame:(_Bool)arg2;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)trimForiOS9Plus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
