//
//  JMapSurroundingElements.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapRenderingKit/JMapRenderingKit.h>
#import "JMapSurroundingIcon.h"
#import "JMapSurroundingShape.h"

/**
 * The Surround Elements Class
 */
@interface JMapSurroundingElements : NSObject

/**
 * The gathered icons information associated to the surrounding element
 */
@property (nonatomic, nonnull) NSArray <JMapSurroundingIcon*>*icons;

/**
 * The gathered shapes information associated to the surrounding element
 */
@property (nonatomic, nonnull) NSArray <JMapSurroundingShape*>*shapes;

@end
