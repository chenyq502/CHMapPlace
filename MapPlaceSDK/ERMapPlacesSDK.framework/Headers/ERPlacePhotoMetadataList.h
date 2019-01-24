//
//  ERPlacePhotoMetadataList.h
//  ERMapPlacesSDK
//
//  Created by zhangyue on 2018/10/22.
//  Copyright © 2018年 erlinyou. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ERPlacePhotoMetadata.h"

NS_ASSUME_NONNULL_BEGIN;

/**
 * A list of |ERPlacePhotoMetadata| objects.
 */
@interface ERPlacePhotoMetadataList : NSObject

/**
 * The array of |ERPlacePhotoMetadata| objects.
 */
@property(nonatomic, readonly, copy) NSArray<ERPlacePhotoMetadata *> *results;

@end

NS_ASSUME_NONNULL_END;
