/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITabBarDelegate.h"
#import "MMWebViewPluginBase.h"

@class NSString, UITabBar;

@interface MMWebViewPlugin_CustomTabBar : MMWebViewPluginBase <UITabBarDelegate> {
	UITabBar* _myCustomTabBar;
	int _lastSelectedIndex;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)imageWithImage:(id)image scaledToSize:(CGSize)size;
-(void)tabBar:(id)bar didSelectItem:(id)item;
-(void)createTabBarWithItems:(id)items backgroundColor:(id)color textColor:(id)color3 selectedTextColor:(id)color4 selectedIndex:(int)index borderStyle:(id)style;
-(BOOL)handleEvent:(unsigned)event userInfo:(id)info;
-(id)init;
@end
