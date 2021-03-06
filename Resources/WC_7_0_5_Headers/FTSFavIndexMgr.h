//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFTSIndexOperation.h"
#import "IFavoritesExt.h"

@class FTSDB, FTSFavDB, FTSFavIndexState, NSObject<OS_dispatch_queue>, NSString;

@interface FTSFavIndexMgr : NSObject <IFavoritesExt, IFTSIndexOperation>
{
    _Bool _isInIndexingLoop;
    _Bool _pause;
    _Bool _canceled;
    int _currentPriority;
    FTSFavIndexState *_favIndexState;
    _Bool _hasInitSource;
    _Bool _hasIndexTask;
    _Bool _hasVerifyTask;
    int _iFTSIndexingType;
    FTSFavDB *_ftsFavDB;
    NSObject<OS_dispatch_queue> *_taskQueue;
    FTSDB *_ftsDB;
}

- (void).cxx_destruct;
- (void)OnDelAllFavItem;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnModFavoritesItem:(id)arg1;
- (void)asyncInitIndex;
- (void)dealloc;
- (void)delayRunIndexTask;
- (void)doInitIndexing;
- (void)fireMsgIndexingTaskLoop;
@property(retain, nonatomic) FTSDB *ftsDB; // @synthesize ftsDB=_ftsDB;
@property(retain, nonatomic) FTSFavDB *ftsFavDB; // @synthesize ftsFavDB=_ftsFavDB;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingPause;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingReloadDB;
- (void)iFTSIndexingStop;
@property(nonatomic) int iFTSIndexingType; // @synthesize iFTSIndexingType=_iFTSIndexingType;
- (id)initWithFTSDB:(id)arg1;
- (_Bool)internalIndexingDeleteTask;
- (_Bool)internalIndexingDropTask;
- (_Bool)internalIndexingInsertTask;
- (_Bool)internalIndexingUpdateTask;
- (void)makeSureInitIndexing;
- (id)pathForIndexState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void)traceIndexState;
- (void)tryLoadIndexState;
- (_Bool)trySaveIndexState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

