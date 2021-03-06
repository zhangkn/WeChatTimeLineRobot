/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "MMUIViewController.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, ScanLicenceBackgroundView, UIView, NSString, WCPayCardNumberScanForeView;
@protocol WCPayCardNumberScanDelegate;

@interface WCPayCardNumberScanViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
	int cutImgVScreenHeight;
	int cutImgVScreenWidth;
	MyImage* origImg;
	MyImage* grayImg;
	UIView* _topBarView;
	UIView* _bottomBarView;
	UIView* _leftBarView;
	UIView* _rightBarView;
	ScanLicenceBackgroundView* m_backgroundView;
	WCPayCardNumberScanForeView* m_foreView;
	BOOL shouldStopCapture;
	BOOL _didHandledRotate;
	BOOL _didSetupUI;
	NSString* _username;
	id<WCPayCardNumberScanDelegate> _delegate;
	AVCaptureSession* _captureSession;
	AVCaptureVideoPreviewLayer* _prevLayer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer* prevLayer;
@property(retain, nonatomic) AVCaptureSession* captureSession;
@property(assign, nonatomic) __weak id<WCPayCardNumberScanDelegate> delegate;
@property(copy, nonatomic) NSString* username;
-(void).cxx_destruct;
-(void)setBarViewToInvisible:(id)invisible;
-(void)handleVisible:(BOOL)visible forView:(id)view;
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
-(BOOL)useHighResolution;
-(void)finalizeCapture;
-(void)continuousAutoFocus:(CGPoint)focus;
-(BOOL)addOutput:(id)output;
-(void)stopCapture;
-(void)startCapture;
-(void)printVersion;
-(CGRect)viewBounds;
-(void)backAction:(id)action;
-(void)personTipsAction:(id)action;
-(void)setupUI;
-(void)setGreenBarView;
-(void)setupEngine;
-(void)stopEngine;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(float)getRotateRadius:(int)radius;
-(void)viewDidTransitionToNewSize;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end

