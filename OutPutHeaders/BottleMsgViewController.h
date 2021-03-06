/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseMsgContentViewController.h"
#import "UIAlertViewDelegate.h"

@class NSString;
@protocol BottleMsgViewControllerDelegate;

@interface BottleMsgViewController : BaseMsgContentViewController <UIAlertViewDelegate> {
	id<BottleMsgViewControllerDelegate> m_bottleDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<BottleMsgViewControllerDelegate> m_bottleDelegate;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)getLeftBarButton;
-(void)onBackButtonClicked;
@end

