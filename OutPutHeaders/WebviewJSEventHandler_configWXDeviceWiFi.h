/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "AirKissViewControllerDelegate.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_configWXDeviceWiFi : WebviewJSEventHandlerBase <AirKissViewControllerDelegate> {
	JSEvent* m_event;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onNoWifiCancel;
-(void)onUserCancel;
-(void)onAirKissReturn:(BOOL)aReturn;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

