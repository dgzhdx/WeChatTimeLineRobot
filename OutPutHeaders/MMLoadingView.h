/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class MMProgressView, UIActivityIndicatorView, MMTimer, NSString, UIImageView, UILabel;

@interface MMLoadingView : XXUnknownSuperclass {
	UIImageView* m_backgroundView;
	UILabel* m_label;
	UIActivityIndicatorView* m_activityIndicatorView;
	UIImageView* m_tipIconView;
	MMProgressView* m_viewProgress;
	BOOL m_bLoading;
	BOOL m_bIgnoringInteractionEventsWhenLoading;
	MMTimer* m_timer;
	NSString* m_loadingText;
	UILabel* m_labelTip;
	BOOL _autoLayoutInCenterOfSupperViewOnStartLoading;
}
@property(assign, nonatomic) BOOL autoLayoutInCenterOfSupperViewOnStartLoading;
@property(retain, nonatomic) UILabel* m_labelTip;
@property(assign, nonatomic) BOOL m_bIgnoringInteractionEventsWhenLoading;
@property(readonly, assign, nonatomic) BOOL m_bLoading;
@property(retain, nonatomic) MMProgressView* m_viewProgress;
@property(retain, nonatomic) UIActivityIndicatorView* m_activityIndicatorView;
@property(retain, nonatomic) UILabel* m_label;
@property(retain, nonatomic) UIImageView* m_backgroundView;
-(void).cxx_destruct;
-(void)dealloc;
-(void)setLabelText:(id)text;
-(void)setActivityIndicatorViewCenter:(BOOL)center;
-(void)ShowTipView:(id)view Title:(id)title Delay:(float)delay;
-(void)stopLoadingAndShowOK;
-(void)stopLoadingAndShowError:(id)error withDelay:(float)delay;
-(void)stopLoadingAndShowError:(id)error;
-(void)stopLoadingAndShowOK:(id)ok withDelay:(float)delay;
-(void)stopLoadingAndShowOK:(id)ok;
-(void)StopLoadingTimerFired:(id)fired;
-(void)stopLoading;
-(void)setFitFrameDownloadImg:(int)img;
-(void)stopLoadingInternal;
-(void)startLoading;
-(void)autoLayoutInCenter;
-(id)initWithDownloadImg;
-(id)initWithCustom:(CGRect)custom bkgColor:(id)color textColor:(id)color3;
-(void)layoutSubviews;
-(void)setFitFrame:(int)frame;
-(id)init;
-(void)BeforeInit;
@end

