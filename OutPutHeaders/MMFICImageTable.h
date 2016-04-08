/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FICImageTableMetadata, MMFICImageFormat, NSString, NSRecursiveLock;

@interface MMFICImageTable : XXUnknownSuperclass {
	NSRecursiveLock* _lock;
	NSString* _tableFilePath;
	NSString* _metadataFilePath;
	MMFICImageFormat* _imageFormat;
	FICImageTableMetadata* _metaData;
	float _screenScale;
	unsigned long _imageRowLength;
	NSString* _filePath;
	int _fileDescriptor;
	long long _fileLength;
	unsigned _entryCount;
	long long _entryLength;
	unsigned _entriesPerChunk;
	long long _imageLength;
	unsigned long _chunkLength;
	unsigned _chunkCount;
	int tableUsedCount;
}
@property(assign, nonatomic) int tableUsedCount;
@property(readonly, copy, nonatomic) NSString* metadataFilePath;
@property(readonly, copy, nonatomic) NSString* tableFilePath;
-(void).cxx_destruct;
-(BOOL)canImageTableRemoveLocalCache;
-(void)cleanupFICImgInMemory;
-(void)saveMetadata;
-(void)reset;
-(void)_entryWasAccessedWithEntityUUID:(id)entityUUID;
-(id)_entryDataForEntityUUID:(id)entityUUID;
-(unsigned)_nextEntryIndex;
-(id)_entryDataAtIndex:(unsigned)index;
-(void)_setEntryCount:(unsigned)count;
-(BOOL)entryExistsForEntityUUID:(id)entityUUID sourceImageUUID:(id)uuid;
-(BOOL)imageExistsForEntity:(id)entity;
-(BOOL)deleteEntryForEntityUUID:(id)entityUUID;
-(id)getImageForEntityUUID:(id)entityUUID isNeedMemoryCache:(BOOL)cache;
-(void)setEntryForEntityUUID:(id)entityUUID imageDrawingBlock:(id)block;
-(id)_chunkAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithFormat:(id)format;
@end
