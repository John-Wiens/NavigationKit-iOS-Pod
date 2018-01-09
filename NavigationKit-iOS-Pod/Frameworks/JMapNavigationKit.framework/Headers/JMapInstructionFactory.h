//
//  JMapInstructionFactory.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapControllerKit/JMapController.h>
#import "JMapInstruction.h"
#import "JMapNavigation.h"

@class JMapNavigation;
@class JMapInstruction;
@class JMapDirection;
@class JMapSurroundingDefinition;

/**
 * The Instruction Factory Class
 */
@interface JMapInstructionFactory : NSObject

/**
 * The reference to the navigation kit
 */
@property (nonatomic, strong, readonly, nonnull) JMapNavigation * navKit;

/**
 * Initialization method for the instruction factory
 *
 * @param options A dictionary of configurations for the instruction factory
 * @return A instance of the instruction factory
 */
- (nonnull instancetype)initWithOptions:(nonnull NSDictionary *)options;

/**
 * Method to create an instruction with given direction
 *
 * @param direction A JMapDirection object passed in for generating an instruction
 * @return A JMapInstruction object returned containing data associated to the direction
 */
- (nonnull JMapInstruction *)createFromDirection:(nonnull JMapDirection *)direction;

/**
 * Method to create an empty instruction
 *
 * @return A JMapInstruction object that contains no data
 */
- (nonnull JMapInstruction *)createEmpty;

/**
 * Method to get a surrounding definition object with the given instruction
 *
 * @param instruction A JMapInstruction object passed in for generating a surrounding definition
 * @return A JMapSurroundingDefinition object returned containing data associated to the instruction
 */
- (nullable JMapSurroundingDefinition *)getSurroundingDefinitionForInstruction:(nonnull JMapInstruction *)instruction;

@end
