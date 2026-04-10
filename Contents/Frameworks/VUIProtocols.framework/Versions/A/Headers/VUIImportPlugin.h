//
//  VUIImportPlugin.h
//  Ovation
//
//  Created by Barry Wark on 6/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <BWKit/BWPluginProtocol.h>

@class VUIDocument;

@protocol VUIImportPlugin <BWPlugin>

+ (NSArray*)importableTypes;
+ (NSString*)userVisibleName;
@end

@protocol VUIImportPluginDelegateMethods
@optional
- (void)importPluginDidFinish:(id<VUIExportPlugin>)plugin 
                   returnCode:(int)returnCode
                        error:(NSError*)err;
@end