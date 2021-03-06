/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"

@protocol WCPayOrderHistoryProductListViewControllerDelegate;

@interface WCPayOrderHistoryProductListViewController : WCPayBaseViewController {
	id<WCPayOrderHistoryProductListViewControllerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(void)clickInfoCell:(id)cell;
-(void)makeProductCell:(id)cell cellInfo:(id)info;
-(void)reloadProductList;
-(void)reloadTableView;
-(void)refreshViewWithData:(id)data;
-(void)setDelegate:(id)delegate;
-(void)viewDidBePoped:(BOOL)view;
-(void)backButtonDone;
-(void)viewDidLoad;
-(id)getHeaderView;
@end

