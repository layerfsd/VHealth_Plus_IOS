//
//  UIButton+VHS_extension.h
//  GongYunTong
//
//  Created by pingjun lin on 16/8/29.
//  Copyright © 2016年 lucky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (extension)

/**
 *  对Button添加倒计时 － 用于发送验证码
 *
 *  @param seconds 倒计的秒数
 */
- (void)countDownWithSeconds:(NSInteger)seconds;

@end
