/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class BBHostInfo, NSDate, NSData, NSArray;

@interface MMHostResolutionOperation : XXUnknownSuperclass {
	CFHostRef _cfHostName;
	BOOL _isResolved;
	BBHostInfo* _hostInformation;
	NSData* _sockaddrBytes;
	NSArray* _ipStrings;
	NSArray* _hostNames;
	id _callback;
	NSDate* _startDate;
	NSDate* _endDate;
}
@property(retain, nonatomic) NSDate* endDate;
@property(retain, nonatomic) NSDate* startDate;
@property(copy, nonatomic) id callback;
@property(readonly, assign, nonatomic) NSArray* hostNames;
@property(readonly, assign, nonatomic) NSArray* ipStrings;
@property(readonly, assign, nonatomic) NSData* sockaddrBytes;
@property(readonly, assign, nonatomic) BBHostInfo* hostInformation;
@property(readonly, assign, nonatomic) BOOL isResolved;
-(void).cxx_destruct;
-(void)dealloc;
-(void)_cleanUp;
-(void)_compileResultsFromCallbacks;
-(id)extractHostNames:(id)names;
-(id)extractHostAddresses:(id)addresses;
-(void)completeOperationForType:(int)type;
-(void)_failedResolvingHostWithStreamError:(timeval)streamError;
-(BOOL)_startResolving;
-(void)startWithCallback:(id)callback;
-(id)initWithHostName:(id)hostName;
-(id)init;
@end
