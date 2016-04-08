/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "UIWebViewDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSURLRequest, GTMOAuth2SignIn, NSURL, GTMOAuth2Authentication, NSString, NSMutableDictionary, UIWebView, NSDictionary;

@interface GTMOAuth2ViewControllerTouch : MMUIViewController <UINavigationControllerDelegate, UIWebViewDelegate> {
	UIWebView* webView_;
	GTMOAuth2SignIn* signIn_;
	NSURLRequest* request_;
	id delegate_;
	SEL finishedSelector_;
	id completionBlock_;
	id popViewBlock_;
	NSString* keychainItemName_;
	void* keychainItemAccessibility_;
	NSString* initialHTMLString_;
	int mustShowActivityIndicator_;
	NSURL* browserCookiesURL_;
	id userData_;
	NSMutableDictionary* properties_;
	BOOL isViewShown_;
	BOOL didViewAppear_;
	BOOL hasNotifiedWebViewStartedLoading_;
	BOOL hasCalledFinished_;
	BOOL hasDoneFinalRedirect_;
	BOOL didDismissSelf_;
	NSString* m_autoCompleteEmail;
	GTMOAuth2Authentication* authentication;
	NSURLRequest* _request;
	double networkLossTimeoutInterval;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSURLRequest* request;
@property(retain, nonatomic) NSDictionary* properties;
@property(retain, nonatomic) id userData;
@property(retain, nonatomic) NSURL* browserCookiesURL;
@property(assign, nonatomic) double networkLossTimeoutInterval;
@property(copy, nonatomic) id popViewBlock;
@property(retain, nonatomic) UIWebView* webView;
@property(readonly, assign, nonatomic) GTMOAuth2SignIn* signIn;
@property(readonly, assign, nonatomic) GTMOAuth2Authentication* authentication;
@property(assign, nonatomic) BOOL showsInitialActivityIndicator;
@property(copy, nonatomic) NSString* initialHTMLString;
@property(assign, nonatomic) void* keychainItemAccessibility;
@property(copy, nonatomic) NSString* keychainItemName;
@property(retain, nonatomic) NSString* m_autoCompleteEmail;
+(void)revokeTokenForGoogleAuthentication:(id)googleAuthentication;
+(void)setSignInClass:(Class)aClass;
+(Class)signInClass;
+(id)controllerWithAuthentication:(id)authentication authorizationURL:(id)url keychainItemName:(id)name completionHandler:(id)handler;
+(id)controllerWithAuthentication:(id)authentication authorizationURL:(id)url keychainItemName:(id)name delegate:(id)delegate finishedSelector:(SEL)selector;
+(id)controllerWithScope:(id)scope clientID:(id)anId clientSecret:(id)secret keychainItemName:(id)name completionHandler:(id)handler;
+(id)controllerWithScope:(id)scope clientID:(id)anId clientSecret:(id)secret keychainItemName:(id)name delegate:(id)delegate finishedSelector:(SEL)selector;
-(void).cxx_destruct;
-(void)setSignAdditionalAuthorizationParameters:(id)parameters;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webViewDidStartLoad:(id)webView;
-(void)updateUI;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)isNavigationBarTranslucent;
-(void)moveWebViewFromUnderNavigationBar;
-(void)signIn:(id)anIn finishedWithAuth:(id)auth error:(id)error;
-(void)signIn:(id)anIn displayRequest:(id)request;
-(id)propertyForKey:(id)key;
-(void)setProperty:(id)property forKey:(id)key;
-(BOOL)shouldUseKeychain;
-(void)clearBrowserCookies;
-(void)cancelSigningIn;
-(void)notifyWithName:(id)name webView:(id)view kind:(id)kind;
-(void)popView;
-(void)onBackButtonClick;
-(void)setUpNavigation;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithAuthentication:(id)authentication authorizationURL:(id)url keychainItemName:(id)name completionHandler:(id)handler;
-(void)signInNetworkLostOrFound:(id)networkLostOrFound;
-(void)stopLoadingAndShowTip:(id)tip;
-(void)showLoading:(id)loading;
-(void)stopIndicator:(id)indicator;
-(void)showIndicator:(id)indicator;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithAuthentication:(id)authentication authorizationURL:(id)url keychainItemName:(id)name delegate:(id)delegate finishedSelector:(SEL)selector;
-(id)initWithScope:(id)scope clientID:(id)anId clientSecret:(id)secret keychainItemName:(id)name completionHandler:(id)handler;
-(id)initWithScope:(id)scope clientID:(id)anId clientSecret:(id)secret keychainItemName:(id)name delegate:(id)delegate finishedSelector:(SEL)selector;
@end
