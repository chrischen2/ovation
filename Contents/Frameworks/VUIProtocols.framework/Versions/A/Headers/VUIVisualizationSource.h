//
//  VUIVisualizationSource.h
//  Ovation
//
//  Created by Barry Wark on 6/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Project.h"

@protocol VUIVisualizationSource <NSObject>

@property (retain,readonly) NSSet* selectedEpochs;
@property (retain,readonly) Project *project;

@end