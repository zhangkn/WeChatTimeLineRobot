/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IFavoritesExt <NSObject>
@optional
-(void)OnDelAllFavItem;
-(void)OnDelFavoritesItem:(unsigned long)item;
-(void)OnModFavoritesItem:(id)item;
-(void)OnStartDownloadFavoritesItem:(id)item;
-(void)OnStartUploadFavoritesItem:(id)item;
-(void)OnRestartAllUploadFailItems;
-(void)OnHasAnyFavoriteData:(BOOL)data;
-(void)OnLoadMoreFavoritesItemFail;
-(void)OnUpdateItemDescription:(id)description ErrCode:(int)code;
-(void)OnUpdateItems:(id)items;
-(void)OnUpdateItemRemark:(unsigned long)remark ErrCode:(int)code;
-(void)OnSearch:(id)search;
-(void)OnUploadFavoritesItem:(id)item LocalDataId:(id)anId FinishedLength:(long)length TotalLength:(long)length4;
-(void)OnDownloadFavoritesItemFail:(id)fail LocalDataId:(id)anId;
-(void)OnDownloadFavoritesItemOK:(id)ok LocalDataId:(id)anId;
-(void)OnDownloadFavoritesItem:(id)item LocalDataId:(id)anId FinishedLength:(long)length TotalLength:(long)length4;
-(void)OnFavoritesItemDownloadFinished:(id)finished ErrCode:(int)code;
-(void)OnNewFavoritesItemUpdate:(id)update;
-(void)OnRemoveFavoritesItem;
-(void)OnFavoritesItemStartAsyncUpload:(id)upload;
-(void)OnAddFavoritesItem:(id)item ErrCode:(int)code;
-(void)OnGetNextPageFavoritesItemList:(id)list ErrCode:(int)code HasMoreItems:(BOOL)items;
-(void)OnGetFirstPageFavoritesItemList:(id)list ErrCode:(int)code HasMoreItems:(BOOL)items;
@end

