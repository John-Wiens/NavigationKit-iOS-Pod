//
//  JMapSurroundingIcon.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapRenderingKit/JMapRenderingKit.h>
#import "JMapSurroundingItem.h"

/**
 * The Surrounding Icon Class
 */
@interface JMapSurroundingIcon : JMapSurroundingItem

/**
 * The JMapIconView reference associated to the surrounding icon
 */
@property (nonatomic, nonnull) JMapIconView *icon;

@end
