/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface CLocalInfo : XXUnknownSuperclass <NSCoding> {
	BOOL m_bHasShowChooseView;
	BOOL m_bIsAuthPushLoginURL;
	BOOL m_IsIpadClassic;
	BOOL m_IsLoadOldSet;
	BOOL m_IsShowChooseVC;
	BOOL m_isAreadyLoginByIphone6Or6P;
	BOOL m_bIsOpenVoicePrint;
	NSString* m_nsCurUsrName;
	NSString* m_nsLastUserName;
	NSString* m_nsLastLoginName;
	NSString* m_nsLastNickName;
	NSString* m_nsLastApnsToken;
	unsigned long m_uiLastUin;
	NSData* m_dtAutoAuthKey;
	NSData* m_dtLastKSid;
	unsigned long m_uiRegType;
	unsigned long m_uiBindAcountFlag;
	unsigned long m_uiLastLoginAcountType;
	NSData* m_nsLastSvrID;
	NSString* m_nsPushLoginURLTips;
	unsigned long m_uiFontLevel;
	unsigned long m_uiGlobalFontLevel;
	unsigned long m_uiWebviewFontLevel;
}
@property(assign, nonatomic) unsigned long m_uiWebviewFontLevel;
@property(assign, nonatomic) BOOL m_bIsOpenVoicePrint;
@property(assign, nonatomic) BOOL m_isAreadyLoginByIphone6Or6P;
@property(assign, nonatomic) BOOL m_IsShowChooseVC;
@property(assign, nonatomic) BOOL m_IsLoadOldSet;
@property(assign, nonatomic) BOOL m_IsIpadClassic;
@property(assign, nonatomic) BOOL m_bIsAuthPushLoginURL;
@property(assign, nonatomic) BOOL m_bHasShowChooseView;
@property(assign, nonatomic) unsigned long m_uiGlobalFontLevel;
@property(assign, nonatomic) unsigned long m_uiFontLevel;
@property(retain, nonatomic) NSString* m_nsPushLoginURLTips;
@property(retain, nonatomic) NSData* m_nsLastSvrID;
@property(assign, nonatomic) unsigned long m_uiLastLoginAcountType;
@property(assign, nonatomic) unsigned long m_uiBindAcountFlag;
@property(assign, nonatomic) unsigned long m_uiRegType;
@property(retain, nonatomic) NSData* m_dtLastKSid;
@property(retain, nonatomic) NSData* m_dtAutoAuthKey;
@property(assign, nonatomic) unsigned long m_uiLastUin;
@property(retain, nonatomic) NSString* m_nsLastApnsToken;
@property(retain, nonatomic) NSString* m_nsLastNickName;
@property(retain, nonatomic) NSString* m_nsLastLoginName;
@property(retain, nonatomic) NSString* m_nsLastUserName;
@property(retain, nonatomic) NSString* m_nsCurUsrName;
+(id)getLocalInfo:(BOOL*)info;
-(void).cxx_destruct;
-(void)copyFromLocalInfo:(id)localInfo;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
