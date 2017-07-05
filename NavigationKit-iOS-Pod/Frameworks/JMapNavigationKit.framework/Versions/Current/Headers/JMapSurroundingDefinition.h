//
//  JMapSurroundingDefinition.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>

/**
 * The Surrounding Definition Class
 */
@interface JMapSurroundingDefinition : NSObject

/**
 * The JMapMap to search for surrounding elements
 */
@property (nonatomic, nonnull) JMapMap *map;
/**
 * Current X,Y coordinate on the map
 */
@property (nonatomic, assign) CGPoint point;
/**
 * The gaze direction in degrees
 */
@property (nonatomic, assign) float gazeDirection;
/**
 * The right visual angle limit
 */
@property (nonatomic, assign) NSInteger visualLimitRight;
/**
 * The left visual angle limit
 */
@property (nonatomic, assign) NSInteger visualLimitLeft;
/**
 * The visual range that can be reached
 */
@property (nonatomic, assign) NSInteger visualRange;
/**
 * The layers that contains shapes that has useful information for generating instructions
 */
@property (nonatomic, nonnull) NSArray <NSString *>*layersOfInterest;
/**
 * The layers that contains shapes that will obstruct the field of view
 */
@property (nonatomic, nonnull) NSArray <NSString *>*visualObstacles;

/**
 * Initialization method for creating a surrounding definition instance
 *
 * @param dict A dictionary containing configurations for generating instructions
 * @return An instance of the surround definition object
 */
- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
