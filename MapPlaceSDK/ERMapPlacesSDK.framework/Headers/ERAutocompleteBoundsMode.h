//
//  ERAutocompleteBoundsMode.h
//  ERMapPlacesSDK
//
//  Created by xiaoyuan on 2018/10/22.
//  Copyright © 2018 erlinyou. All rights reserved.
//

/**
 * \defgroup AutocompleteBoundsMode ERAutocompleteBoundsMode
 * @{
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN;

/**
 * Specifies how autocomplete should interpret the |bounds| parameters.
 */
typedef NS_ENUM(NSUInteger, ERAutocompleteBoundsMode) {
    /** Interpret |bounds| as a bias. */
    kERAutocompleteBoundsModeBias,
    /** Interpret |bounds| as a restrict. */
    kERAutocompleteBoundsModeRestrict
};

NS_ASSUME_NONNULL_END;

/**@}*/
