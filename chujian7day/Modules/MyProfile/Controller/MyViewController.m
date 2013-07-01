//
//  MyViewController.m
//  chujian7day
//
//  Created by 王 瑞 on 13-4-19.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import "MyViewController.h"
#import "orderCell.h"
//#import "OrderDetailViewController.h"

#import "ContractDetailViewController.h"
@interface MyViewController ()

@end

@implementation MyViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self intNav];
	[self initView];
    [self initTable];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    
}

-(void)initView{
    self.view.backgroundColor=[UIColor whiteColor];
}

-(void)intNav{
//    self.navigationItem.title=@"我的订单";
    self.navigationItem.leftBarButtonItem=[[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonSystemItemCancel target:self action:@selector(Cancel)];
    
    //设置返回按钮的样式
    UIBarButtonItem *myBackButtonItem=[[UIBarButtonItem alloc] init];
    myBackButtonItem.title=@"返回";
    self.navigationItem.backBarButtonItem=myBackButtonItem;
    
    
    /* 添加 Nav Menu  */
    //
    if (self.navigationItem) {
        CGRect frame = CGRectMake(0.0, 0.0, 200.0, self.navigationController.navigationBar.bounds.size.height);
        SINavigationMenuView *menu = [[SINavigationMenuView alloc] initWithFrame:frame title:@"我的订单"];
        //Set in which view we will display a menu
        [menu displayMenuInView:self.view];
        //Create array of items
        menu.items = @[@"有效订单", @"在住订单", @"离店订单",@"取消订单",@"未到订单"];
        menu.delegate = self;
        self.navigationItem.titleView = menu;
    }
}
-(void)initTable{
    self.list=[[UITableView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT) style:UITableViewStylePlain];
    self.list.rowHeight=60;
    self.list.dataSource=self;
    self.list.delegate=self;
    
    [self.view addSubview:self.list];
}

-(void)Cancel{
    [self.revealSideViewController pushOldViewControllerOnDirection:PPRevealSideDirectionLeft animated:YES];
}


#pragma mark - Navigation Menu Delegate
- (void)didSelectItemAtIndex:(NSUInteger)index{
    
}

#pragma mark - Table View Data Source
-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 6;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *orderIdentifier=@"order";
    orderCell *aOrderCell=(orderCell *)[tableView dequeueReusableCellWithIdentifier:orderIdentifier];
    if (!aOrderCell) {
        aOrderCell=[[orderCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:orderIdentifier];
    }
    aOrderCell.backgroundColor=[UIColor whiteColor];
    [aOrderCell setOrderNo:@"订单编号：123456" address:@"小南门" date:@"猴年马月"] ;
    aOrderCell.accessoryType=UITableViewCellAccessoryDisclosureIndicator;
    return aOrderCell;
}

#pragma mark - Table View Delegate
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
   // OrderDetailViewController *orderDetailViewController=[[OrderDetailViewController alloc] init];
    ContractDetailViewController *contractDetailViewController=[[ContractDetailViewController alloc] init];
    [self.navigationController pushViewController:contractDetailViewController animated:YES];
}
@end
