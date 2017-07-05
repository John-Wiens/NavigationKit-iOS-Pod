//
//  JMapSurroundingShape.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import "JMapSurroundingItem.h"
#import <JMapRenderingKit/JMapRenderingKit.h>

/**
 * The Surrounding Shape Class
 */
@interface JMapSurroundingShape : JMapSurroundingItem

/**
 * The Shape reference associated to the surrounding shape
 */
@property (nonatomic, nonnull) Shape *shape;

@end
