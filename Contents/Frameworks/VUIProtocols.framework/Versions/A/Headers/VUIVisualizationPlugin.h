/*
 *  VUIVisualizationPlugin.h
 *  VizUI
 *
 *  Created by Barry Wark on 6/18/07.
 *  Copyright 2007 Barry Wark. All rights reserved.
 *
 */

#import <BWKit/BWKit.h>
#import "VUIVisualizationSource.h"

@class Project;

#define VUIVisualizationPluginUIPreferencesChanged @"VUIVisualizationPluginUIPreferencesChanged"

@protocol VUIVisualizationPlugin <BWPlugin>
+ (id<VUIVisualizationPlugin>)visualizer;
+ (NSString*)userVisibleName;

@property (retain,readwrite) NSSet *epochs;
@property (retain,readonly) NSView *configView;
@property (retain,readonly) NSView *view;
@property (retain,readwrite) NSDictionary *uiPreferences;
@end