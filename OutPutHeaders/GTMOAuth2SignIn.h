/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, GTMOAuth2Authentication, MMimer, NSDictionary, GTMHTTPFetcher;
@protocol NSObject;

@interface GTMOAuth2SignIn : XXUnknownSuperclass {
	GTMOAuth2Authentication* auth_;
	NSURL* authorizationURL_;
	NSDictionary* additionalAuthorizationParameters_;
	id<NSObject> delegate_;
	SEL webRequestSelector_;
	SEL finishedSelector_;
	BOOL hasHandledCallback_;
	GTMHTTPFetcher* pendingFetcher_;
	BOOL shouldFetchGoogleUserEmail_;
	BOOL shouldFetchGoogleUserProfile_;
	NSDictionary* userProfile_;
	SCNetworkReachabilityRef reachabilityRef_;
	MMimer* networkLossTimer_;
	double networkLossTimeoutInterval_;
	BOOL hasNotifiedNetworkLoss_;
	id userData_;
}
@property(retain) GTMHTTPFetcher* pendingFetcher;
@property(assign) BOOL hasHandledCallback;
@property(assign, nonatomic) double networkLossTimeoutInterval;
@property(retain, nonatomic) NSDictionary* userProfile;
@property(assign, nonatomic) BOOL shouldFetchGoogleUserProfile;
@property(assign, nonatomic) BOOL shouldFetchGoogleUserEmail;
@property(retain, nonatomic) id userData;
@property(assign, nonatomic) SEL finishedSelector;
@property(assign, nonatomic) SEL webRequestSelector;
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSDictionary* additionalAuthorizationParameters;
@property(retain, nonatomic) NSURL* authorizationURL;
@property(retain, nonatomic) GTMOAuth2Authentication* authentication;
+(id)decodeWebSafeBase64:(id)a64;
+(void)revokeTokenForGoogleAuthentication:(id)googleAuthentication;
+(id)userInfoFetcherWithAuth:(id)auth;
+(id)mutableURLRequestWithURL:(id)url paramString:(id)string;
+(id)standardGoogleAuthenticationForScope:(id)scope clientID:(id)anId clientSecret:(id)secret;
+(id)nativeClientRedirectURI;
+(id)googleUserInfoURL;
+(id)googleRevocationURL;
+(id)googleTokenURL;
+(id)googleAuthorizationURL;
-(void)stopReachabilityCheck;
-(void)reachabilityTimerFired:(id)fired;
-(void)reachabilityTarget:(SCNetworkReachabilityRef)target changedFlags:(unsigned)flags;
-(void)destroyUnreachabilityTimer;
-(void)startReachabilityCheck;
-(void)invokeFinalCallbackWithError:(id)error;
-(void)finishSignInWithError:(id)error;
-(void)updateGoogleUserInfoWithData:(id)data;
-(void)infoFetcher:(id)fetcher finishedWithData:(id)data error:(id)error;
-(void)fetchGoogleUserInfo;
-(void)auth:(id)auth finishedWithFetcher:(id)fetcher error:(id)error;
-(void)authCodeObtained;
-(BOOL)loadFailedWithError:(id)error;
-(BOOL)cookiesChanged:(id)changed;
-(BOOL)titleChanged:(id)changed;
-(BOOL)requestRedirectedToRequest:(id)request;
-(void)closeTheWindow;
-(void)windowWasClosed;
-(BOOL)startWebRequest;
-(id)parametersForWebRequest;
-(BOOL)startSigningIn;
-(void)cancelSigningIn;
-(void)dealloc;
-(id)initWithAuthentication:(id)authentication authorizationURL:(id)url delegate:(id)delegate webRequestSelector:(SEL)selector finishedSelector:(SEL)selector5;
-(void)addScopeForGoogleUserInfo;
@end
