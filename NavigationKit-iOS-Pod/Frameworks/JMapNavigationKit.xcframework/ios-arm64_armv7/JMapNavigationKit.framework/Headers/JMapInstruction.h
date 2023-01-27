//
//  JMapInstruction.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import "JMapSurroundingDefinition.h"
#import "JMapSurroundingElements.h"
#import "JMapDirection.h"

@class JMapDirection;

/**
 * The Instruction Class
 */
@interface JMapInstruction : NSObject

/**
 * The direction for dictating turns/U-turns
 */
@property (nonatomic, strong, nonnull) NSString * direction;
/**
 * The gaze direction angle of the instruction
 */
@property (nonatomic, assign) float turnReferenceAngle;
/**
 * The text instruction
 */
@property (nonatomic, strong, nullable) NSString * text;
/**
 * The distance between instructions
 */
@property (nonatomic, assign) float pixelDistance;
/**
 * The path type associated to the instruction
 */
@property (nonatomic, strong, nullable) JMapPathType * pathType;
/**
 * The origin point of the path associated to the instruction
 */
@property (nonatomic, strong, nonnull) JMapWaypoint * originPoint;
/**
 * The decision point for generating the instruction
 */
@property (nonatomic, strong, nullable) JMapWaypoint * decisionPoint;
/**
 * The end point of the path associated to the instruction
 */
@property (nonatomic, strong, nonnull) JMapWaypoint * completionPoint;
/**
 * The surrounding definition associated to the instruction
 */
@property (nonatomic, strong, nullable) JMapSurroundingDefinition * surroundingDefinition;
/**
 * The surrounding elements containing shape/icon data associated to the instruction
 */
@property (nonatomic, strong, nullable) JMapSurroundingElements * surroundingElements;
/**
 * The reference to the next floor for an instruction that involves floor switching
 */
@property (nonatomic, strong, nullable) JMapFloor * nextFloor;
/**
 * Initialization method for creating an instruction instance with a given direction
 */
- (nonnull instancetype)initWithDirection:(nonnull JMapDirection *)direction;

@end
