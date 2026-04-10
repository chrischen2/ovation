//
//  DVCPPlotView.h
//  DataView
//
//  Created by Barry Wark on 3/24/10.
//  Copyright 2010 Physion Consulting LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CorePlot/CorePlot.h>
#import <DataView/DVPlotContainer.h>
#import <DataView/DVCPGraphDescription.h>

@interface DVCPPlotView : CPLayerHostingView <DVPlotContainer, CPScatterPlotDataSource> {
	NSArray *plotDescriptors;
	NSMutableDictionary *plots;
	CPXYGraph *graph;
	NSString *title;
	BOOL multiAxes;
	BOOL showLegend;
}

@property (copy,readwrite) NSArray *plotDescriptors;
@property (copy,readwrite) NSString *title;
@property (assign,readwrite) BOOL multiAxes;
@property (assign,readwrite) BOOL showLegend;

@property (copy,readwrite,nonatomic) DVCPGraphDescription *graphDescription;

@end
