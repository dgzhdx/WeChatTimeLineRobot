/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WebSearchMgrDelegate <NSObject>
-(void)onSearchRecmdDataFail;
-(void)onSearchRecmdDataReturn:(id)aReturn;
-(void)onWebSearchDataFail:(BOOL)fail;
-(void)onWebSearchDataChanged:(BOOL)changed isFromFuncQuery:(BOOL)funcQuery;
@optional
-(void)onFailReceiveSuggestionJSON;
-(void)onReceiveSuggestionJSON:(id)json;
-(void)onOpenContactError:(id)error withMessage:(id)message;
-(void)onOpenContact:(id)contact;
-(void)onUpdateCommonImg:(id)img;
-(void)onUpdateSnsImg:(id)img;
-(void)onUpdateHeadImg:(id)img;
@end

