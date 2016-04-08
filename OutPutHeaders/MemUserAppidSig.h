/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MemAppidSigManager, WloginUserInfo;

@interface MemUserAppidSig : XXUnknownSuperclass <NSCoding> {
	WloginUserInfo* userInfo;
	MemAppidSigManager* userSigList;
}
@property(readonly, assign, nonatomic) WloginUserInfo* userInfo;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(int)decodeUserPwdSigData:(id)data andSigAppId:(unsigned)anId byKey:(id)key outPwdSig:(id)sig;
-(BOOL)encodeUserPwdSig:(id)sig byKey:(id)key outDataBuff:(id)buff;
-(void)printUserAndSig;
-(unsigned)topPriorityAppid;
-(unsigned)userUin;
-(void)setUserUin:(unsigned)uin;
-(BOOL)hasExpireBySigType:(unsigned)type andAppid:(unsigned)appid;
-(BOOL)hasExpireByAppid:(unsigned)appid andAppExpTime:(unsigned)time;
-(void)setPriority:(unsigned)priority andTime:(unsigned)time byAppid:(unsigned)appid;
-(void)setSig:(id)sig;
-(void)removeSigByAppid:(unsigned)appid;
-(id)sigByAppid:(unsigned)appid andSigName:(id)name;
-(void)dealloc;
-(id)initWithBasicInfo:(unsigned)basicInfo andPubNo:(unsigned)no andClientType:(unsigned)type;
@end
