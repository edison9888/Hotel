//
//  AreaViewController.m
//  chujian7day
//
//  Created by simon on 13-4-20.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import "AreaViewController.h"

@interface AreaViewController ()

@end

@implementation AreaViewController
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    [self initData];
    [self initNav];
    [self initTableView];
}

#pragma mark UITableView
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier=@"areaCell";
    UITableViewCell *cell=[tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    
    if(cell==nil)
    {
        cell=[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifier];
    }
    cell.textLabel.text=@"天河区";
    
    cell.selectionStyle=UITableViewCellSelectionStyleNone;
    
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50;
}

#pragma mark init
-(void)initData
{
    listData=[[NSMutableArray alloc] init];
}
-(void)initTableView
{
    areaTableView=[[UITableView alloc] initWithFrame:CGRectMake(0, 44, 320, self.view.frame.size.height) style:UITableViewStyleGrouped];
    areaTableView.delegate=self;
    areaTableView.dataSource=self;
    UIView *tmp=[[UIView alloc] init];
    [areaTableView setTableFooterView:tmp];
    areaTableView.backgroundView=tmp;
    areaTableView.backgroundColor=[UIColor clearColor];
    [self.view addSubview:areaTableView];
}
-(void)initNav
{
    self.navigationController.navigationBar.hidden=YES;
    UINavigationBar *navigationBar = [[UINavigationBar alloc] initWithFrame:CGRectMake(0, 0, 320, 44)];
    UINavigationItem *navagationItem = [[UINavigationItem alloc] initWithTitle:@""];
    [navigationBar pushNavigationItem:navagationItem animated:YES];
    [self.view addSubview:navigationBar];
    
    
    UIButton *rightButton = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [rightButton setBackgroundColor:[UIColor clearColor]];
    rightButton.frame = CGRectMake(0, 0, 49,30);
    //UIImage *backImage=[[UIImage imageNamed:@"navibutton.png"] stretchableImageWithLeftCapWidth:5 topCapHeight:5];
    //[rightButton setBackgroundImage:backImage forState:UIControlStateNormal];
    [rightButton setTitle:@"右" forState:UIControlStateNormal];
    rightButton.titleLabel.font=[UIFont fontWithName:@"Arial-BoldMT" size:14.0];
    [rightButton addTarget:self action:@selector(rightButtonClicked:) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *button1 = [[UIBarButtonItem alloc] initWithCustomView:rightButton];
    
    [navagationItem setRightBarButtonItem:button1 animated:YES];
    
    UIButton *leftButton = [UIButton buttonWithType:UIButtonTypeCustom];
    [leftButton setBackgroundColor:[UIColor clearColor]];
    leftButton.frame = CGRectMake(0, 0, 49, 30);
    
    //[leftButton setBackgroundImage:[UIImage imageNamed:@"backbutton.png"] forState:UIControlStateNormal];
    [leftButton setTitle:@"返回" forState:UIControlStateNormal];
    leftButton.titleLabel.font=[UIFont boldSystemFontOfSize:13.0];
    [leftButton setTitleEdgeInsets:UIEdgeInsetsMake(0, 8, 1, 0)];
    [leftButton addTarget:self action:@selector(leftButtonClick:) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *button2 = [[UIBarButtonItem alloc] initWithCustomView:leftButton];
    [navagationItem setLeftBarButtonItem:button2 animated:YES];
}

#pragma mark Button Clicked
-(void)rightButtonClicked:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

-(void)leftButtonClick:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
@end
