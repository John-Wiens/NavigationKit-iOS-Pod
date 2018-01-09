//
//  JMapNavigation.h
//  JMapNavigationKit
//
//  Created by Louie Yuen on 2017-11-30.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapControllerKit/JMapController.h>

#import "JMapInstructionFactory.h"
#import "JMapSurroundingDefinition.h"
#import "JMapSurroundingElements.h"
#import "JMapInstruction.h"
#import "JMapDirection.h"

@class JMapInstructionFactory;
@class JMapSurroundingDefinition;
@class JMapSurroundingElements;
@class JMapInstruction;
@class JMapDirection;

/**
 * The Navigation Kit interface
 */
@interface JMapNavigation : NSObject <CLLocationManagerDelegate>

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
 * Defined U-Turn angle threshold for generating a U-Turn instruction. Angle span from directly behind the gaze direction. Defaults to 45
 */
@property (nonatomic, nullable) NSNumber *uTurnThreshold;

/**
 * Core Location manager object
 */
@property (nonatomic, strong, nullable) CLLocationManager * locationManager;

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

/**
 *  Activate Navigation Mode.
 *
 *  @param active A Boolean to set rotation navigation to active or inactive
 */
- (void)activeNavigationMode:(BOOL)active;

/**
 * Checks if user location is within the threshold from the closest line in the
 * wayfinding path, returns true if within threshold and false otherwise.
 *
 * @param pathPerFloorArray An array of JMapPathPerFloor objects to compare with user's location
 * @param threshold Millimeter value used to define acceptable distance from wayfinding path
 */
- (BOOL)hasUserVeeredOffRoute:(nonnull NSArray <JMapPathPerFloor *> *)pathPerFloorArray threshold:(NSInteger)threshold;

@end
