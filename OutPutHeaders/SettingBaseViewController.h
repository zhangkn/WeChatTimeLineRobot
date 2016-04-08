/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "tableViewDelegate.h"

@class MMTableView, NSString;

@interface SettingBaseViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSString* m_nsTitle;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsTitle;
-(void).cxx_destruct;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithTitle:(id)title;
-(void)touchesCancelled_TableView:(id)view withEvent:(id)event;
-(void)touchesEnded_TableView:(id)view withEvent:(id)event;
-(void)touchesMoved_TableView:(id)view withEvent:(id)event;
-(void)touchesBegan_TableView:(id)view withEvent:(id)event;
@end
