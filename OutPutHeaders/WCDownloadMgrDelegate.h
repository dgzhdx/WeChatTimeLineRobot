/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCDownloadMgrDelegate <NSObject>
-(void)onAddDownloadQueue:(id)queue downloadType:(int)type;
-(void)onBeginDownload:(id)download downloadType:(int)type;
-(void)onCancelDownloadSuccess:(id)success downloadType:(int)type;
-(void)onDownloadFinish:(id)finish downloadType:(int)type;
-(void)onDownloadMediaProcessChange:(id)change downloadType:(int)type current:(int)current total:(int)total;
@end
