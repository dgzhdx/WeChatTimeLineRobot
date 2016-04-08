/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface MMFICImageFormat : XXUnknownSuperclass <NSCopying> {
	NSString* _name;
	NSString* _family;
	CGSize _imageSize;
	CGSize _pixelSize;
	unsigned _maxImgCount;
	unsigned _cpuzSize;
	unsigned _pageSize;
	unsigned _version;
}
@property(assign, nonatomic) unsigned version;
@property(assign, nonatomic) unsigned pageSize;
@property(assign, nonatomic) unsigned cpuzSize;
@property(assign, nonatomic) unsigned maxImgCount;
@property(readonly, assign, nonatomic) unsigned bitsPerComponent;
@property(readonly, assign, nonatomic) unsigned bytesPerPixel;
@property(readonly, assign, nonatomic) unsigned bitmapInfo;
@property(readonly, assign, nonatomic) CGSize pixelSize;
@property(assign, nonatomic) CGSize imageSize;
@property(copy, nonatomic) NSString* family;
@property(copy, nonatomic) NSString* name;
+(id)formatWithName:(id)name family:(id)family imageSize:(CGSize)size maxImgCount:(unsigned)count version:(unsigned)version;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end
