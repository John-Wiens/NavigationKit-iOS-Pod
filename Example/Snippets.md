## Code Example

```objective-c

//Initializing the Navigation Kit with Controller and Options
//Options parameter:
//visualLimitRight - default 60 (int)
//visualLimitLeft - default 60 (int)
//visualRange - default 250 (int)
//layersOfInterest - default empty array (i.e. @[@"Units"])
//visualObstacles - default empty array (i.e. @[@"Obstacles", @"Elevator"])
- (void)initNavigationKit {
JMapNavigationKit *navigationKit = [[JMapNavigationKit alloc] initWithController:JMapController.instance andOptions:nil];
}

//Generate instructions using the array of JMapPathPerFloor objects returned from wayfindBetweenWaypoint call
- (void)generateInstructionsWithPaths:(NSArray*)pathsPerFloor {
    //Get instructions array
    NSArray <JMapInstruction*> *instructions = [self.navKit createInstructionsFromPaths:pathsPerFloor];

    //Iterate through instructions
    for (JMapInstruction *inst in instructions) {
        //Print default instructions
        NSLog(@"%@", inst.text);
    }
}

//Using pre-defined definition, get surround elements
- (void)getSurroundingElementsFromDefinition:(JMapSurroundingDefinition *)definition {
    if (!definition) {
        //Generate default instructions
        definition = [[JMapSurroundingDefinition alloc] initWithDictionary:@{@"map" : self.controller.currentMap,
        @"point" : [NSValue valueWithCGPoint:CGPointMake(500, 500)],
        @"gazeDirection" : @(0),
        @"layersOfInterest" : @[@"Units"],
        @"visualRange" : @(100),
        @"visualObstacles" : @[@"Elevators"]
        }];
    }
    
    //Call navigationKit method for getting surrounding elements
    JMapSurroundingElements *elements = [_navKit getSurroundingElements:definition];
    
    //Use surrounding elements for highlighting shapes/icons
    JMapStyle *style = [[JMapStyle alloc] init];
    [style setFillColor:[UIColor redColor]];

    //Highlight shapes if there exists any
    if (elements.shapes.count > 0) {
        for (JMapSurroundingShape *surroundingShape in elements.shapes) {
            Shape *shape = surroundingShape.shape;
            [self.controller styleShapes:@[shape] withStyling:style];
        }
    }
}
```
