//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavMultiMenuTableViewCellDelegate.h"
#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "MyFavoritesBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FavMultiMenuTableViewCell, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UITableView, UIView;

@interface FavBaseTableDataController : MMObject <FavMultiMenuTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, MyFavoritesBaseCellDelegate, IFavoritesExt, IFavoritesRepairSvrDataExt>
{
    _Bool m_bAnimating;
    _Bool m_bReadyToLoad;
    FavMultiMenuTableViewCell *m_editingMenuTableCell;
    NSMutableDictionary *m_cellViewCache;
    UIActivityIndicatorView *m_activityView;
    UIView *m_footerView;
    _Bool _hasMoreData;
    _Bool _itemEditable;
    _Bool _multiSelecting;
    _Bool _showDataSize;
    NSMutableArray *_arrFavItem;
    NSMutableArray *_arrFavDataWrap;
    NSMutableDictionary *_selectedItemsDict;
    double _searchBarHeight;
    UITableView *_tableView;
    NSString *_highLightWord;
    id <FavBaseTableDataControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItemDescription:(id)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)PushXMLContentForItem:(id)arg1;
- (void)addFavItemList:(id)arg1;
@property(retain, nonatomic) NSMutableArray *arrFavDataWrap; // @synthesize arrFavDataWrap=_arrFavDataWrap;
@property(retain, nonatomic) NSMutableArray *arrFavItem; // @synthesize arrFavItem=_arrFavItem;
- (void)autoScrollForSearchBar:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (id)cellIdForDataIndex:(long long)arg1;
- (void)clearCache;
- (void)clearData;
- (id)dataAtIndex:(long long)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <FavBaseTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)findFavData:(id)arg1 inDataList:(id)arg2;
- (id)genDeleteConfirmIconIsHightLight:(_Bool)arg1;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)getCellViewAtIndex:(long long)arg1;
- (double)getHeightForItem:(id)arg1;
- (int)getInsertIndexOfFavItem:(id)arg1;
- (id)getReusableCellForRowAtIndexPath:(id)arg1;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSString *highLightWord; // @synthesize highLightWord=_highLightWord;
- (int)indexOfdata:(id)arg1;
- (id)init;
- (_Bool)isDataInArray:(id)arg1;
@property(nonatomic) _Bool itemEditable; // @synthesize itemEditable=_itemEditable;
- (void)moveFavItem:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
@property(nonatomic) _Bool multiSelecting; // @synthesize multiSelecting=_multiSelecting;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadMore;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(retain, nonatomic) NSMutableDictionary *selectedItemsDict; // @synthesize selectedItemsDict=_selectedItemsDict;
@property(nonatomic) _Bool showDataSize; // @synthesize showDataSize=_showDataSize;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

