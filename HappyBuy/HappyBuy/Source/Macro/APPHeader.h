//
//  APPHeader.h
//  HappyBuy
//
//  Created by TanZhiWei on 16/4/25.
//  Copyright © 2016年 TanZhiWei. All rights reserved.
//

#ifndef APPHeader_h
#define APPHeader_h

//  Tarbar 所有界面的父界面
#import "MainViewController.h"
#import <RDVTabBarItem.h>


// 首页界面
#import "HomePageViewController.h"



// 团购界面
#import "BuyViewController.h"



// 商家界面
#import "BusinessViewController.h"



// 我的界面
#import "MineViewController.h"



//登陆注册界面
#import "LoginViewController.h"
#import "RegisterViewController.h"
#import "ResetPwdViewController.h"


// 界面宽度
#define Width  CGRectGetWidth([UIScreen mainScreen].bounds)
#define Height  CGRectGetHeight([UIScreen mainScreen].bounds)


//三方库
#import <AFNetworking.h>
#import<RDVTabBarController.h>
#import<MMProgressHUD.h>
#import "ChameleonMacros.h"
#import "UIImage+TransformColorAndImage.h"
#import <EAIntroView.h>
#import <MJRefresh.h>
#import <Reachability.h>
#import <SDImageCache.h>



//
//
//





#endif /* APPHeader_h */
