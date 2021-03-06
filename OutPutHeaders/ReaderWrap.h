/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class TemplateImageTextWrap, TemplateHeaderWrap, TemplateDetailToplineWrap, NSDate, NSMutableArray, UIColor, NSString, ReaderTopNewWrap;

@interface ReaderWrap : XXUnknownSuperclass {
	NSString* m_nsTitle;
	NSString* m_nsUrl;
	NSString* m_nsNativeUrl;
	NSString* m_nsShortUrl;
	NSString* m_nsTid;
	NSString* m_nsSource;
	NSString* m_nsSourceIcon;
	NSDate* m_pubTime;
	unsigned long m_uiType;
	BOOL m_bHasVedio;
	NSString* m_nsCategory;
	NSString* m_nsUserName;
	NSString* m_nsNickName;
	ReaderTopNewWrap* m_TopNewWrap;
	unsigned long m_uiDelFlag;
	unsigned long m_uiContentAttributeBitSetFlag;
	unsigned long m_uiItemShowType;
	UIColor* m_topColor;
	NSMutableArray* m_arrStyles;
	NSMutableArray* m_arrLines;
	unsigned long _templateShowType;
	TemplateImageTextWrap* _imageTextWrap;
	TemplateHeaderWrap* _headerWrap;
	TemplateDetailToplineWrap* _toplineWrap;
	NSMutableArray* _leftColumns;
	NSMutableArray* _rightColumns;
	NSMutableArray* _opItems;
	unsigned _m_index;
}
@property(assign, nonatomic) unsigned m_index;
@property(retain, nonatomic) NSMutableArray* opItems;
@property(retain, nonatomic) NSMutableArray* rightColumns;
@property(retain, nonatomic) NSMutableArray* leftColumns;
@property(retain, nonatomic) TemplateDetailToplineWrap* toplineWrap;
@property(retain, nonatomic) TemplateHeaderWrap* headerWrap;
@property(retain, nonatomic) TemplateImageTextWrap* imageTextWrap;
@property(assign, nonatomic) unsigned long templateShowType;
@property(retain, nonatomic) NSMutableArray* m_arrLines;
@property(retain, nonatomic) NSMutableArray* m_arrStyles;
@property(retain, nonatomic) UIColor* m_topColor;
@property(assign, nonatomic) unsigned long m_uiItemShowType;
@property(assign, nonatomic) unsigned long m_uiContentAttributeBitSetFlag;
@property(assign, nonatomic) unsigned long m_uiDelFlag;
@property(retain, nonatomic) ReaderTopNewWrap* m_TopNewWrap;
@property(retain, nonatomic) NSString* m_nsNickName;
@property(retain, nonatomic) NSString* m_nsUserName;
@property(retain, nonatomic) NSString* m_nsCategory;
@property(assign, nonatomic) BOOL m_bHasVedio;
@property(assign, nonatomic) unsigned long m_uiType;
@property(retain, nonatomic) NSDate* m_pubTime;
@property(retain, nonatomic) NSString* m_nsSourceIcon;
@property(retain, nonatomic) NSString* m_nsSource;
@property(retain, nonatomic) NSString* m_nsTid;
@property(retain, nonatomic) NSString* m_nsShortUrl;
@property(retain, nonatomic) NSString* m_nsNativeUrl;
@property(retain, nonatomic) NSString* m_nsUrl;
@property(retain, nonatomic) NSString* m_nsTitle;
+(BOOL)parseLineWrap:(id)wrap xmlNode:(XmlReaderNode_t*)node;
+(BOOL)parseKeyLineWrap:(id)wrap valueLineWrap:(id)wrap2 xmlNode:(XmlReaderNode_t*)node;
+(id)getArrReaderWaps:(id)waps;
+(id)getFirstReaderTitle:(id)title;
+(XmlReaderNode_t*)getReaderNode:(XmlReaderNode_t*)node;
-(void).cxx_destruct;
-(void)dealloc;
-(id)description;
@end

