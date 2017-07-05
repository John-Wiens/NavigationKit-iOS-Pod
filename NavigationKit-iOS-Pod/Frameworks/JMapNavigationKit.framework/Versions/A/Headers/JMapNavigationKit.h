//
//  JMapNavigationKit.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-05-05.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapControllerKit/JMapController.h>
#import "JMapInstructionFactory.h"
#import "JMapInstruction.h"
#import "JMapSurroundingElements.h"
#import "JMapSurroundingDefinition.h"
#import "JMapDirection.h"

@class JMapInstructionFactory;
@class JMapSurroundingDefinition;
@class JMapSurroundingElements;
@class JMapInstruction;
@class JMapDirection;

/**
 * The Navigation Kit interface
 */
@interface JMapNavigationKit : NSObject

/**
 * Controller reference for the navigation kit
 */
@property (nonatomic, nonnull) JMapController *controller;

/**
 * Instruction factory instance of the navigation kit
 */
@property (nonatomic, strong, nullable) JMapInstructionFactory * instructionFactory;

/**
 * Defined angleThreshold for generating instructions, defaults to 20
 */
@property (nonatomic, nullable) NSNumber *angleThreshold;

/**
 * Initialization method for the navigation kit
 *
 * @param controller The JMapController instance
 * @param options Any additional configurations for generating instructions
 * @return An instance of the navigation kit
 */
- (nonnull instancetype)initWithController:(nonnull JMapController *)controller andOptions:(nullable NSDictionary *)options;

/**
 * Method for generating instructions with paths
 *
 * @param paths The array of JMapPathPerFloor objects returned from the wayfind method in the SDK
 * @return An array of JMapInstruction objects
 */
- (nonnull NSArray <JMapInstruction *>*)createInstructionsFromPaths:(nonnull NSArray <JMapPathPerFloor *>*)paths;

/**
 * Method to gather surround element data with a definition
 *
 * @param definition A JMapSurroundDefinition containing configurations for search criterias
 * @return A JMapSurroundElements object containing information for text directions
 */
- (nonnull JMapSurroundingElements*)getSurroundingElements:(nonnull JMapSurroundingDefinition*)definition;

/**
 * Method to convert inches to pixels relative to the map scale
 *
 * @param inches The desired visual range in inches
 * @return A float value in pixels for visual range
 */
- (float)getPixelsFromInches:(float)inches;

/**
 * Method to convert millimeters to pixels relative to the map scale
 *
 * @param millimeters The desired visual range in millimeters
 * @return A float value in pixels for visual range
 */
- (float)getPixelsFromMillimeters:(float)millimeters;

@end
