/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIView;
@protocol WCTimeLineGreetingTipViewDelegate;

@interface WCSnsRedEnvelopesAlertView : XXUnknownSuperclass {
	UIView* m_backgroundView;
	id<WCTimeLineGreetingTipViewDelegate> m_delegate;
	BOOL m_bEndAnmation;
}
@property(assign, nonatomic) __weak id<WCTimeLineGreetingTipViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)removeView;
-(void)endAnimation;
-(void)showAnimation;
-(void)OnClickIknow;
-(id)imageFromUIView:(id)uiview;
-(id)dotImageWithColor:(id)color width:(float)width height:(float)height;
-(id)initWithFrame:(CGRect)frame Message:(id)message;
@end
