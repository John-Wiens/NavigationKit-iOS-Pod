//
//  JMapSurroundingIcon.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMapSurroundingItem.h"
#import <JMapRenderingKit/JMapRenderingKit.h>

/**
 * The Surrounding Icon Class
 */
@interface JMapSurroundingIcon : JMapSurroundingItem

/**
 * The JMapIconView reference associated to the surrounding icon
 */
@property (nonatomic, nonnull) JMapIconView *icon;

@end
