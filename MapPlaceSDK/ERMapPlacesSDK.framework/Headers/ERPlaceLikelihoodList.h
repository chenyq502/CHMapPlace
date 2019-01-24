//
//  ERPlaceLikelihoodList.h
//  ERMapPlacesSDK
//
//  Created by zhangyue on 2018/10/22.
//  Copyright © 2018年 erlinyou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN;

@class ERPlaceLikelihood;

/**
 * Represents a list of places with an associated likelihood for the place being the correct place.
 * For example, the Places service may be uncertain what the true Place is, but think it 55% likely
 * to be PlaceA, and 35% likely to be PlaceB. The corresponding likelihood list has two members, one
 * with likelihood 0.55 and the other with likelihood 0.35. The likelihoods are not guaranteed to be
 * correct, and in a given place likelihood list they may not sum to 1.0.
 */
@interface ERPlaceLikelihoodList : NSObject

/** An array of likelihoods, sorted in descending order. */
@property(nonatomic, copy) NSArray<ERPlaceLikelihood *> *likelihoods;

@end

NS_ASSUME_NONNULL_END;
