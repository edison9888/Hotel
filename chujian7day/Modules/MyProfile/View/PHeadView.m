//
//  PHeadView.m
//  chujian7day
//
//  Created by 王 瑞 on 13-4-20.
//  Copyright (c) 2013年 chujian. All rights reserved.
//

#import "PHeadView.h"

@implementation PHeadView

static UIFont *titleFont = nil;
 static UIColor *titleColor; 
- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        titleFont=[UIFont systemFontOfSize:10.0];
        titleColor=[UIColor colorWithRed:128.0/255.0 green:128.0/255.0 blue:128.0/255.0 alpha:1.0];
    }
    return self;
}

-(void)setHeadImage:(UIImage *)aHeadImage nameString:(NSString *)aName signString:(NSString *)aSign leveString:(NSString *)aLeve
{
    self.headImage=aHeadImage;
    self.nameString=aName;
    self.signString=aSign;
    self.levelString=aLeve;
    
    self.warningString=nil;
    isValid = YES;
    [self setNeedsDisplay];
}

-(void)setHeadImage:(UIImage *)headImage warningString:(NSString *)aWarningString{
    self.headImage=headImage;
    self.warningString=aWarningString;
    
    self.nameString=nil;
    self.signString=nil;
    self.levelString=nil;
    isValid = NO;
    [self setNeedsDisplay];
    
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    CGContextRef context=UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [UIColor whiteColor].CGColor);
    CGContextFillRect(context, CGRectMake(0, 0, self.frame.size.width, self.frame.size.height));
    CGContextSetFillColorWithColor(context, titleColor.CGColor);
    
    [self.headImage drawInRect:CGRectMake(10, 20, 75, 75)];
    NSLog(@"%@",self.warningString);
    if (isValid) {
    [titleColor set];
    [self.nameString drawAtPoint:CGPointMake(100, 50) forWidth:200 withFont:titleFont fontSize:14 lineBreakMode:UILineBreakModeTailTruncation baselineAdjustment:UIBaselineAdjustmentAlignCenters];
    [self.signString drawAtPoint:CGPointMake(100, 20) forWidth:200 withFont:titleFont fontSize:14 lineBreakMode:UILineBreakModeTailTruncation baselineAdjustment:UIBaselineAdjustmentAlignCenters];
        [self.levelString drawAtPoint:CGPointMake(100, 70) forWidth:200 withFont:titleFont fontSize:14 lineBreakMode:UILineBreakModeTailTruncation baselineAdjustment:UIBaselineAdjustmentAlignCenters];
    }else{
        [titleColor set];
        [self.warningString drawAtPoint:CGPointMake(100, 50) forWidth:200 withFont:titleFont fontSize:14 lineBreakMode:UILineBreakModeTailTruncation baselineAdjustment:UIBaselineAdjustmentAlignCenters];
        
    }
    
}




#pragma mark - Lazy programming
-(UIImage *)headImage{
    if (!_headImage) {
        _headImage=[[UIImage alloc] init];
    }
    return _headImage;
}

-(NSString *)nameString{
    if (!_nameString) {
        _nameString=[[NSString alloc] init];
    }
    return _nameString;
}
-(NSString *)signString{
    if (!_signString) {
        _signString=[[NSString alloc] init];
    }
    return _signString;
}
-(NSString *)levelString{
    if (!_levelString) {
        _levelString=[[NSString alloc] init];
    }
    return _levelString;
}

-(NSString *)warningString{
    if (!_warningString) {
        _warningString=[[NSString alloc] init];
    }
    return _warningString;
}
@end
