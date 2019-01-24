//
//  ERAddressComponent.h
//  ERMapPlacesSDK
//
//  Created by xiaoyuan on 2018/10/22.
//  Copyright © 2018 erlinyou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * EN: Represents a component of an address, e.g., street number, postcode, city, etc.
 *
 * 中文: 表示地址的组成部分，例如街道号码，邮政编码，城市等。
 */
@interface ERAddressComponent : NSObject

/**
 * EN: Type of the address component. This string will be one of the constants defined in ERPlaceTypes.h.
 *
 * 中文: 地址组件的类型。 该字符串将是ERPlaceTypes.h中定义的常量之一。
 */
@property(nonatomic,readonly, copy) NSString *type;

/**
 * EN: Name of the address component, e.g. "Hong Kong"
 *
 * 中文: 地址组件的名称，例如 “香港”
 */
@property(nonatomic,readonly, copy) NSString *name;

- (instancetype)initWithType:(NSString *)type name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
