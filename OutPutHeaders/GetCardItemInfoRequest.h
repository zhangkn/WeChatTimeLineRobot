/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetCardItemInfoRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned statisticScene;
@property(retain, nonatomic) NSString* jsCheckinfoSessionUsername;
@property(retain, nonatomic) NSString* jsCheckinfoUrl;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* fromUsername;
@property(assign, nonatomic) unsigned fromScene;
@property(retain, nonatomic) NSString* cardId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

