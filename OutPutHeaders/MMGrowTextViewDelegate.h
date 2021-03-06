/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol MMGrowTextViewDelegate <NSObject>
@optional
-(void)onAccessoryViewFrameChanged:(CGRect)changed;
-(void)MMGrowTextViewBeginEditing:(id)editing;
-(void)MMGrowTextView:(id)view pasteImage:(id)image;
-(BOOL)MMGrowTextView:(id)view shouldPasteImage:(id)image;
-(void)UITextViewTextDidChangeNotification:(id)uitextViewText;
-(void)keyboardWillHide:(BOOL)keyboard;
-(void)keyboardDidShow:(float)keyboard;
-(void)keyboardWillShow:(float)keyboard;
-(void)TextViewDidDeleteToNil;
-(BOOL)TextViewDidDelete;
-(void)setKeyboardAnimationCurve:(int)curve;
-(void)setKeyboardAnimationDuration:(float)duration;
-(void)TextDidChanged:(id)text selectedRange:(NSRange)range;
-(void)TextViewDidEnter:(id)textView;
-(void)TextViewHeightDidChanged:(id)textViewHeight;
@end

