//
//  ERPlaceLikelihood.h
//  ERMapPlacesSDK
//
//  Created by zhangyue on 2018/10/22.
//  Copyright © 2018年 erlinyou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN;

@class ERPlace;

/**
 * Represents a |ERPlace| and the relative likelihood of the place being the best match within the
 * list of returned places for a single request. For more information about place likelihoods, see
 * |ERPlaceLikelihoodList|.
 */
@interface ERPlaceLikelihood : NSObject

/**
 * The place contained in this place likelihood.
 */
@property(nonatomic, strong, readonly) ERPlace *place;

- (instancetype)initWithPlace:(ERPlace *)place;

@end

NS_ASSUME_NONNULL_END;
