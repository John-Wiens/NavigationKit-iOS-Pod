//
//  JMapSurroundingItem.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The Surround Item Class
 */
@interface JMapSurroundingItem : NSObject

/**
 * The distance between the point to the shape/icon of interest
 */
@property (nonatomic, assign) float distance;

/**
 * The layer name associated to the surrounding item
 */
@property (nonatomic, nonnull) NSString *layerName;

/**
 * The angle from the gaze direction to the shape/icon of interest
 */
@property (nonatomic, assign) float angle;

@end
