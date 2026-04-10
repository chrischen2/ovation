//
//  DVPlotController.h
//  DataView
//
//  Created by Barry Wark on 2/22/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <DataView/DVPlotDescriptor.h>

/*!
    @protocol
    @abstract    Protocol for DataView's plot containers (e.g. plot views).
*/

@protocol DVPlotContainer <NSObject>

@property (copy,readwrite) NSArray *plotDescriptors;
@property (copy,readwrite) NSString *title;
@property (assign,readwrite) BOOL multiAxes;
@property (assign,readwrite) BOOL showLegend;

/*!
    @method     
    @abstract   Update this controller's plotView from self.plotDescriptors
    @discussion May ignore axes that aren't representable by the controller (e.g. Z-axis for 2D plot controllers).
 Subclasses should call super's implementation. Marks plotView as dirty.
*/

- (void)updatePlot;

/*!
    @method     
    @abstract   Reset plot
    @discussion Deletes existing plots.
*/

- (void)reset;

@optional
/*!
 @method     
 @abstract  Convenience method to add a plot descriptor to this plot.
 @discussion Builds a plot descriptor for the given axes and adds it to this controller's plot(s). If hold==NO,
 calls reset before adding the new descriptor. If desired, this method will call self.update() after adding the
 plot descriptor. You may not want to update immediatley if you are going to add more plots or are going to
 customize the plot descriptor after its creation (e.g. adding a plot label).
 @param plotAxes Array of DVAxisDescriptor
 @param plotType Desired plot type
 @param hold If YES, the new DVPlotDescriptor
 @result The new DVPlotDescriptor (for customization, if desired)
 @throws NSException(NSInvalidArgumentException) if not enough axes are supplied for the given plot type.
 */

- (DVPlotDescriptor*)plotAxes:(NSArray*)axes
                     plotType:(DVPlotType)plotType
                         hold:(BOOL)hold
                       update:(BOOL)update;

- (DVPlotDescriptor*)plotTimeSeries:(BWNumericData*)data
                           duration:(NSTimeInterval)duration
                          timeUnits:(NSString*)timeUnits
                        seriesLabel:(NSString*)seriesLabel
                        seriesUnits:(NSString*)units
                           plotType:(DVPlotType)plotType
                               hold:(BOOL)hold
                             update:(BOOL)update;

- (DVPlotDescriptor*)plotXData:(BWNumericData*)xData
                        XLabel:(NSString*)xLabel
                        XUnits:(NSString*)xUnits
                         YData:(BWNumericData*)yData
                        YLabel:(NSString*)yLabel
                        YUnits:(NSString*)yUnits
                         ZData:(BWNumericData*)zData
                        ZLabel:(NSString*)zLabel
                        ZUnits:(NSString*)zUnits
                      plotType:(DVPlotType)plotType
                          hold:(BOOL)hold
                        update:(BOOL)update;

@end
