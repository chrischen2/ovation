//
//  DVPlotDataDescriptor.h
//  DataView
//
//  Created by Barry Wark on 2/22/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <DataView/DVDataDescriptor.h>
#import <DataView/DVAxisDescriptor.h>

typedef enum {
    DVScatterPlot,
    DVLinePlot,
    DVBarPlot,
	DVSurfacePlot,
	DVVolumePlot,
	DVContourPlot,
} DVPlotType;


/*!
 @class
 @abstract    Container for plot data
 @discussion  Conceptually, a DVPlotDataDescriptor should contain the information for a single data serires within one panel of a figure (roughly, one axes worth of data).
*/

@interface DVPlotDescriptor : NSObject {
    NSArray *axes;
    DVPlotType plotType;
    NSString *label;
    DVPlotDescriptor *parent;
    NSMutableArray *dependents;
    NSColor *color;
}

@property (assign,readwrite) DVPlotType plotType;
@property (retain,readonly) NSArray *axes; //array of DVAxisDescriptor
@property (copy,readwrite) NSString *label;
@property (retain,readonly) DVPlotDescriptor *parent;
@property (retain,readonly) NSMutableArray *dependents;
@property (retain,readwrite) NSColor *color;


+ (DVPlotDescriptor*)plotDescriptorWithtimeSeries:(BWNumericData*)data
                                         duration:(NSTimeInterval)duration
                                        timeUnits:(NSString*)timeUnits
                                      seriesLabel:(NSString*)seriesLabel
                                      seriesUnits:(NSString*)units
                                         plotType:(DVPlotType)plotType;

+ (DVPlotDescriptor*)plotDescriptorWithXData:(BWNumericData*)xData
                                      XLabel:(NSString*)xLabel
                                      XUnits:(NSString*)xUnits
                                       YData:(BWNumericData*)yData
                                      YLabel:(NSString*)yLabel
                                      YUnits:(NSString*)yUnits
                                       ZData:(BWNumericData*)zData
                                      ZLabel:(NSString*)zLabel
                                      ZUnits:(NSString*)zUnits
                                    plotType:(DVPlotType)plotType;

/*!
 @method     
 @abstract   Designated initializer
 @discussion Builds a plot data descriptor with data for a given set of axes.
 @param axesArray Array of DVAxis.
 @param thePlotType Plot type. See @link DVPlotType DVPlotType @/link.
 @param label Plot label (e.g. the name in figure legend).
*/

- (id)initWithAxes:(NSArray*)axesArray
          plotType:(DVPlotType)thePlotType
             label:(NSString*)theLabel;

/*!
    @method     
    @abstract   Modify this plot descriptors list of dependent plots.
    @discussion Dependent plots are plotted on their parent's axes.
*/

- (void)addDependentPlot:(DVPlotDescriptor*)dep;
- (void)removeDependentPlot:(DVPlotDescriptor*)dep;
- (NSUInteger)numParents;
@end
