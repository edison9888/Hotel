//
//  PersonViewController.h
//  chujian7day
//
//  Created by 王 瑞 on 13-4-19.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PHeadView.h"

@interface PersonViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    BOOL isValid;
}


@property (nonatomic, strong) UITableView *mainTableView;
@property (nonatomic, strong) PHeadView *headView;
@property (nonatomic, strong) NSMutableArray *nameList;
@property (nonatomic, strong) UIButton *logoutButton;

@property (nonatomic, strong) UIButton *loginButton;
@property (nonatomic, strong) UIButton *registerButton;


-(id)init;
@end
