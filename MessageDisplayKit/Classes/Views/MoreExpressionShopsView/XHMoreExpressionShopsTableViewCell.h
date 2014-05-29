//
//  XHMoreExpressionShopsTableViewCell.h
//  MessageDisplayExample
//
//  Created by 曾 宪华 on 14-5-29.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, XHExpressionStateType) {
    kXHFreeExpression = 0,
    kXHRemoteExpression,
    kXHDownloadedExpression,
    kXHPaymentExpression,
};

@interface XHMoreExpressionShopsTableViewCell : UITableViewCell

@property (nonatomic, assign) BOOL newExpressionEffect;

@property (nonatomic, assign) XHExpressionStateType expressionStateType;

@end
