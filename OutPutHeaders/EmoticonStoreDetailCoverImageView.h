/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class MMWebImageView, MMRedHeadLiner;

@interface EmoticonStoreDetailCoverImageView : MMUIView {
	MMRedHeadLiner* m_tagImageView;
	MMWebImageView* m_webImageView;
}
@property(retain, nonatomic) MMRedHeadLiner* m_tagImageView;
@property(retain, nonatomic) MMWebImageView* m_webImageView;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)setTagHidden:(BOOL)hidden;
-(void)setImageUrl:(id)url;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
