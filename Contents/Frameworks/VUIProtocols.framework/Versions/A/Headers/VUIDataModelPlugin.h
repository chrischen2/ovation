//
//  VUIDataModelPlugin.h
//  Ovation
//
//  Created by Barry Wark on 4/17/09.
//  Copyright 2009 Barry Wark. All rights reserved.
//

extern NSString * const VUIDataModelRequestUIUpdateNotification;

// Required protocols in data model
#import <VUIProtocols/DataModel.h>
#import <VUIProtocols/DataModelUI.h>

@protocol VUIDataModelPlugin <NSObject>

@required
- (NSArray*)modelBundles;

@optional
- (id)dataMigrator;
@end

