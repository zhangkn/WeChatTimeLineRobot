/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCRedEnvelopesControlLogic.h"
#import "WCRedEnvelopes2016GreetingViewControllerDelegate.h"
#import "WCRedEnvelopesLogicMgrExt.h"
#import "WCBaseControlMgrExt.h"
#import "IWCPayControlLogicExt.h"

@class WCRedEnvelopes2016GreetingViewController, WCPayControlData, WCPayPayMoneyLogic, NSString;

@interface WCRedEnvelopesGreetingControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2016GreetingViewControllerDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCRedEnvelopesLogicMgrExt> {
	WCPayControlData* m_oPayData;
	WCPayPayMoneyLogic* m_oPayMoneyLogic;
	int m_scene;
	WCRedEnvelopes2016GreetingViewController* m_sendView;
	BOOL _isViewAnimationing;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_scene;
-(void).cxx_destruct;
-(void)redEnvelopes2016GreetingViewControllerSendClick:(id)click;
-(void)redEnvelopes2016GreetingViewControllerBack;
-(void)OnGenRedEnvelopesPayRequest:(id)request Error:(id)error;
-(void)OnQueryRedEnvelopesUserInfo:(id)info Error:(id)error;
-(BOOL)gotoViewController:(id)controller;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)showSendingView:(BOOL)view;
-(void)dealloc;
-(void)startLogic;
@end

