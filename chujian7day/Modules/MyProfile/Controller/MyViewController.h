//
//  MyViewController.h
//  chujian7day
//
//  Created by 王 瑞 on 13-4-19.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SINavigationMenuView.h"
@interface MyViewController : UIViewController<SINavigationMenuDelegate,UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, strong) UITableView *list;
@property (nonatomic, strong) SINavigationMenuView *navMenu;

@end
