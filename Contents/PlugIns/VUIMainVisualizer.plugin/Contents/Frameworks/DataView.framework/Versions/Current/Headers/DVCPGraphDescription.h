//
//  DVCPGraphDescription.h
//  DataView
//
//  Created by Barry Wark on 4/30/10.
//  Copyright 2010 Physion Consulting LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface DVCPGraphDescription : NSObject
{
	
}

@property (assign,readwrite) BOOL multiAxes;
@property (assign,readwrite) BOOL showLegend;

@property (retain,readwrite) NSArray *plotDescriptors;

- (id)initWithPlotDescriptors:(NSArray*)descriptors
					multiAxes:(BOOL)showMultipleAxes
				   showLegend:(BOOL)legend;

@end
