/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetCurLocationResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* city;
@property(retain, nonatomic) NSString* province;
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

