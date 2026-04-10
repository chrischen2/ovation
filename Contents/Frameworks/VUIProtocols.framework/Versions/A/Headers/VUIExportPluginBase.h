//
//  VUIExportPluginBase.h
//  VizUI
//
//  Created by Barry Wark on 2/5/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BWKit/BWPluginBase.h>
#import "VUIExportPlugin.h"

@class VUIDocument;

#define VUI_EXPORT_PLUGIN_FILE_EXTENSION_KEY  @"VUIExportPluginFileExtension"
#define VUI_EXPORT_PLUGIN_USER_VISIBLE_NAME_KEY  @"VUIExportPluginUserVisibleName"

@interface VUIExportPluginBase : BWPluginBase <VUIExportPlugin> {
    NSUInteger totalProgress;
    NSUInteger currentProgress;
    NSString *exportStatus;
}

@property (assign,readonly) NSUInteger totalProgress;
@property (assign,readonly) NSUInteger currentProgress;
@property (copy,readonly) NSString *exportStatus;

- (BOOL)exportEpochsWithIDs:(NSArray*)epochIDs 
                     forDocument:(VUIDocument*)doc
                         fromPSC:(NSPersistentStoreCoordinator*)psc 
                           toURL:(NSURL*)url
             additionalInfo:(NSDictionary*)userInfo
                      error:(NSError**)err;

//convenience method, called by exportEpochsWithIDs:fromPSC:toURL
- (BOOL)exportEpochs:(NSArray*)epochs 
         forDocument:(VUIDocument*)doc
               toURL:(NSURL*)url
      additionalInfo:(NSDictionary*)userInfo
               error:(NSError**)err;

+ (NSString*)fileExtension;
+ (NSString*)userVisibleName;
@end
