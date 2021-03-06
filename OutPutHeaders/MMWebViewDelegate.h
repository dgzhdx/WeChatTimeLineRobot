/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMWebViewDelegate <NSObject>
@optional
-(void)onLeaveWebviewAndJumpToViewConroller;
-(void)accessDeepLink:(id)link Url:(id)url Webview:(id)webview;
-(BOOL)canAccessDeepLink:(id)link Url:(id)url Webview:(id)webview;
-(void)setCanShake:(BOOL)shake;
-(void)onWebViewWillClose:(id)onWebView;
-(void)onWebViewDidRotateFromInterfaceOrientation:(int)onWebView;
-(void)onWebViewWillRotateToInterfaceOrientation:(int)onWebView;
-(void)onWebViewDidFinishLoad:(id)onWebView;
-(void)onWebViewDidStartLoad:(id)onWebView;
-(id)webViewFailToLoad:(id)load;
-(void)webViewReturn:(id)aReturn;
@end

