/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CSyncBaseEvent.h"


@interface NewSyncHandler : CSyncBaseEvent {
	BOOL m_bPush;
}
-(BOOL)HandleSyncResp:(id)resp Push:(BOOL)push ShowPush:(BOOL)push3 ContinueFlag:(unsigned*)flag Scene:(unsigned long)scene syncKeyMd5:(id)a5;
-(void)InitHandler:(id)handler Lock:(id)lock DocPath:(id)path Notify:(id)notify;
-(id)init;
@end

