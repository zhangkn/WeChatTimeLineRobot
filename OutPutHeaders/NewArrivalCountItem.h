/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface NewArrivalCountItem : XXUnknownSuperclass <NSCoding> {
	NSString* m_nsUsrName;
	unsigned long m_uiMsgID;
	unsigned long m_uiArrivalCount;
}
@property(retain, nonatomic) NSString* m_nsUsrName;
@property(assign, nonatomic) unsigned long m_uiMsgID;
@property(assign, nonatomic) unsigned long m_uiArrivalCount;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end

