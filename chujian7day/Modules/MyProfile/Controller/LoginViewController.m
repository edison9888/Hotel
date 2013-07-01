//
//  LoginViewController.m
//  chujian7day
//
//  Created by 王 瑞 on 13-5-10.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import "LoginViewController.h"
#import "ThriftService.h"
#import "MemberDetail.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
  
}

- (IBAction)submit:(id)sender {
    if ([self.username.text isEqualToString:@""] || [self.password.text isEqualToString:@""] ) {
        if ([self.username.text isEqualToString:@""]) {
            [SVProgressHUD showErrorWithStatus:@"用户名不能为空"];
        }else{
            [SVProgressHUD showErrorWithStatus:@"密码不能为空"];
        }
    }else{

    
        ThriftService *service= [ThriftService shared];
        Signture *aSign = [[Signture alloc] initWithUsername:[NSString stringWithFormat:@"%@",self.username.text] password:[NSString stringWithFormat:@"%@",self.password.text]];
        [SVProgressHUD showWithStatus:@"登录中"];
        
        [service useLogin:aSign success:^(MemberDetail *success){
            [SVProgressHUD showSuccessWithStatus:@"登陆成功" duration:0.5f];
            [self dismissViewControllerAnimated:YES completion:nil];
        }
        failed:^(NSString *error){
            [SVProgressHUD showErrorWithStatus:@"登录失败" duration:0.7f];
        }];
    }
    
}

- (IBAction)cancel:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
