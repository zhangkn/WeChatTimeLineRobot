/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCSessionDelegate <NSObject>
@optional
-(void)session:(id)session didReceiveFile:(id)file;
-(void)session:(id)session didFinishFileTransfer:(id)transfer error:(id)error;
-(void)session:(id)session didReceiveUserInfo:(id)info;
-(void)session:(id)session didFinishUserInfoTransfer:(id)transfer error:(id)error;
-(void)session:(id)session didReceiveApplicationContext:(id)context;
-(void)session:(id)session didReceiveMessageData:(id)data replyHandler:(id)handler;
-(void)session:(id)session didReceiveMessageData:(id)data;
-(void)session:(id)session didReceiveMessage:(id)message replyHandler:(id)handler;
-(void)session:(id)session didReceiveMessage:(id)message;
-(void)sessionReachabilityDidChange:(id)sessionReachability;
-(void)sessionWatchStateDidChange:(id)sessionWatchState;
@end

