//
//  VUIExportPlugin.h
//  VizUI
//
//  Created by Barry Wark on 2/5/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <BWKit/BWPluginProtocol.h>

@class VUIDocument;

extern NSString *VUIExportPluginType;

@protocol VUIExportPlugin <BWPlugin>

@property (assign,readonly) NSUInteger totalProgress;
@property (assign,readonly) NSUInteger currentProgress;
@property (copy,readonly) NSString *exportStatus;

/**
 Exports data from Ovation in plugin-defined format.
 Implementations should create their own NSManagedObjectContext with the given PSC. This call may be made in a non-main thread.
 
 @param userInfo Additional information to export (e.g. analysis parameters). May be nil.
 @param[out] err NSError if unsuccessful.
 @return True if successful.
*/

- (BOOL)exportEpochsWithIDs:(NSArray*)epochIDs 
                forDocument:(VUIDocument*)doc
                    fromPSC:(NSPersistentStoreCoordinator*)psc 
                      toURL:(NSURL*)url
             additionalInfo:(NSDictionary*)userInfo
                      error:(NSError**)err;

+ (NSString*)fileExtension;
+ (NSString*)userVisibleName;
@end