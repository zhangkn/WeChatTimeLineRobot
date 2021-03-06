/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WindowDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "IMsgRevokeExt.h"
#import "IMsgExt.h"
#import "MMUIViewController.h"
#import "scrollViewDelegate.h"

@class WCActionSheet, UIImageView, NSURL, CMessageWrap, UILabel, MMTimer, MMAnimationTipView, UIButton, MMProgressView, MPMoviePlayerController, MMScrollView, NSString, UIView;

@interface MMMoviePlayerController : MMUIViewController <WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt, UIAlertViewDelegate> {
	NSURL* m_url;
	NSString* m_videoPath;
	unsigned long m_uiVideoTime;
	BOOL m_bIsFullScreen;
	BOOL m_bLoadFinished;
	BOOL m_bIsPlaying;
	BOOL m_bRestart;
	UIView* m_loadingView;
	UIImageView* imageView;
	MMProgressView* m_progressView;
	UILabel* m_percentageLabel;
	MPMoviePlayerController* m_moviePlayer;
	UIButton* m_playBigButton;
	CMessageWrap* m_msgWrap;
	MMScrollView* m_scrollView;
	UILabel* m_timerLabel;
	MMTimer* m_timerNoRetain;
	MMAnimationTipView* m_tipView;
	UIView* m_maskView;
	CGSize m_size;
	BOOL m_isFromFav;
	int curOrientation;
	float curScreenWith;
	float curScreenHeight;
	BOOL m_bIsStatusBarHidden;
	BOOL m_bSaveMode;
	BOOL m_bDownloadExpired;
	WCActionSheet* m_actionSheet;
	BOOL m_autoRepeat;
	BOOL m_disableSave;
	UIImageView* _thumbImageView;
	double _currentPlaybackTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_disableSave;
@property(assign, nonatomic) BOOL autoRepeated;
@property(assign, nonatomic) double currentPlaybackTime;
@property(retain, nonatomic) UIImageView* thumbImageView;
@property(assign, nonatomic) BOOL m_bSaveMode;
@property(assign, nonatomic) BOOL m_isFromFav;
@property(retain, nonatomic) MMTimer* m_timerNoRetain;
@property(retain, nonatomic) CMessageWrap* m_msgWrap;
@property(retain, nonatomic) MPMoviePlayerController* m_moviePlayer;
@property(copy, nonatomic) NSURL* m_url;
@property(retain, nonatomic) NSString* m_videoPath;
-(void).cxx_destruct;
-(void)onVideoVoipViewDisappear;
-(void)onVideoVoipViewDidAppear:(id)onVideoVoipView;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(void)stopPlaying;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)interactivePopGestureRecognizerShouldBegin:(id)interactivePopGestureRecognizer;
-(void)updateSubViewsRect;
-(void)willAppear;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewDidUnload;
-(void)resetTableViewOffset:(id)offset;
-(void)dealloc;
-(id)initWithMsgWrap:(id)msgWrap VideoPath:(id)path;
-(id)initWithCaptureVideoInfo:(id)captureVideoInfo;
-(void)OnMsgDownloadVideoExpiredFail:(id)fail MsgWrap:(id)wrap;
-(void)OnUpdateVideoStatus:(id)status MsgWrap:(id)wrap;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)InternalUpdateVideo:(id)video;
-(void)touchesCancelled_ScrollView:(id)view withEvent:(id)event;
-(void)touchesEnded_ScrollView:(id)view withEvent:(id)event;
-(void)touchesMoved_ScrollView:(id)view withEvent:(id)event;
-(void)touchesBegan_ScrollView:(id)view withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)changePlayerStatus;
-(void)autoPlay;
-(void)viewDidTransitionToNewSize;
-(void)didAppear;
-(void)viewDidLoad;
-(void)initView;
-(void)initVideoPlayerView;
-(void)updateTimerLabel;
-(void)openPlayer;
-(void)onOperate:(id)operate;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)OnSelectSessionCancel:(id)cancel;
-(void)OnSelectSession:(id)session SessionSelectController:(id)controller;
-(void)delayHideBar;
-(void)onSave:(id)save;
-(void)onReturn:(id)aReturn;
-(void)initData;
-(void)systemActived:(id)actived;
-(void)systemResigned:(id)resigned;
-(void)hideLoadingView;
-(void)showLoadingView;
-(void)initLoadingView;
-(void)handleDownloadFail;
-(void)updateProgress:(unsigned long)progress;
-(void)startPlayingWithURL:(id)url at:(id)at;
-(void)videoPlayFinished:(id)finished;
-(void)videoPlayStateChanged:(id)changed;
-(void)clearPlaying;
-(void)setFullScreen;
-(void)setStandardScreen;
-(void)stopTimer;
-(void)updateTitle;
-(void)startTimer;
-(void)hideToolBar:(BOOL)bar;
-(void)viewWillPresent:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(CGRect)getFullscreenRect;
-(CGRect)getStandardRect;
-(CGRect)getLabelRect;
-(CGRect)getImageViewRect;
-(CGRect)getImageViewRectFullAndShowBar;
-(CGRect)getMaskViewFrameFullAndHideBar;
-(CGRect)getMaskViewFrameFullAndShowBar;
-(void)resetTimeLabel;
-(void)setTimeLabel:(unsigned long)label;
-(id)init;
@end

