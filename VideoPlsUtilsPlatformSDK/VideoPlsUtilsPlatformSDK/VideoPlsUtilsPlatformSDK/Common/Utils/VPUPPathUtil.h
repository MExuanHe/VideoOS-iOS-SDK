//
//  VPUPPathUtil.h
//  VideoPlsUtilsPlatformSDK
//
//  Created by Zard1096 on 2017/8/18.
//  Copyright © 2017年 videopls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VPUPPathUtil : NSObject

+ (NSString *)path;

+ (NSString *)reportPath;

+ (NSString *)cytronPath;

+ (NSString *)livePath;

+ (NSString *)imagePath;

+ (NSString *)luaPath;

+ (NSString *)luaOSPath;

+ (NSString *)subPathOfLua:(NSString *)placeholder;

+ (NSString *)goodsPath;

+ (NSString *)pathByPlaceholder:(NSString *)placeholder;



@end
