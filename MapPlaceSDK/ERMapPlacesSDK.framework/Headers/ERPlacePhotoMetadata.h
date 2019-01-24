//
//  ERPlacePhotoMetadata.h
//  ERMapPlacesSDK
//
//  Created by zhangyue on 2018/10/22.
//  Copyright © 2018年 erlinyou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN;

/**
 * The metadata corresponding to a single photo associated with a place.
 */
@interface ERPlacePhotoMetadata : NSObject

/**
 * The data provider attribution string for this photo.
 *
 * These are provided as a NSAttributedString, which may contain hyperlinks to the website of each
 * provider.
 *
 * In general, these must be shown to the user if data from this ERPlacePhotoMetadata is shown, as
 * described in the Places API Terms of Service.
 */
@property(nonatomic, readonly, copy, nullable) NSAttributedString *attributions;

/**
 * The maximum pixel size in which this photo is available.
 */
@property(nonatomic, readonly, assign) CGSize maxSize;

@end

NS_ASSUME_NONNULL_END;
