//
//  DVPlotWindowController.h
//  DataView
//
//  Created by Barry Wark on 2/22/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <DataView/DVPlotContainer.h>

@interface DVPlotWindowController : NSWindowController {
    id<DVPlotContainer> plot;
}

@property (retain,readwrite) id<DVPlotContainer> plot;
@end
