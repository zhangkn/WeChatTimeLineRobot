/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSString;

@interface FavImageDataManager : MMService <MMService> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)getTempFilePath;
-(void)DeleteImageFromFile:(id)file;
-(id)UIImageDataWriteToFile:(id)file;
-(id)UIImageWriteToFile:(id)file;
@end
