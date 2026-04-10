//
//  DVAxis.h
//  DataView
//
//  Created by Barry Wark on 2/23/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BWKit/BWKit.h>

extern const NSUInteger DVXAxis;
extern const NSUInteger DVYAxis;
extern const NSUInteger DVZAxis;

typedef enum {
    DVLinearAxisScaling = 1,
    DVLogAxisScaling,
} DVAxisScaling;

@interface DVAxisDescriptor : NSObject <NSCopying> {
    NSUInteger axisNumber;
    NSRange range; // Axis range. May be ignored by PlotController when combining axes.
    NSMutableDictionary *axisProps; //Plotting library-specific settings for this axis. May be ignored by the DVPlot when merging axes.
    DVAxisScaling axisScaling;
    BWNumericData *data;
    NSString *label;
    NSString *units;
    
}

@property (assign,readonly) NSUInteger axisNumber;
@property (assign,readwrite) NSRange range;
@property (retain,readwrite) NSMutableDictionary *axisProps;
@property (assign,readwrite) DVAxisScaling axisScaling;
@property (retain,readwrite) BWNumericData *data;
@property (copy,readwrite) NSString *label;
@property (copy,readwrite) NSString *units;

+ (NSRange)autoRange;

+ (BWNumericData*)timeDataForDuration:(NSTimeInterval)duration
                             nSamples:(NSUInteger)nSamples;

+ (DVAxisDescriptor*)axisWithData:(BWNumericData*)theData
                    forAxisNumber:(NSUInteger)axis
                          scaling:(DVAxisScaling)s
                            range:(NSRange)r
                            label:(NSString*)theLabel
                            units:(NSString*)theUnits; 

- (id)initWithData:(BWNumericData*)theData
     forAxisNumber:(NSUInteger)axis
           scaling:(DVAxisScaling)s
             range:(NSRange)r
             label:(NSString*)theLabel
             units:(NSString*)theUnits;  //designated initializer

/*!
    @method     
    @abstract   Comparison function for DVAxis
    @discussion Returns self.axisNumber.compare
*/

- (NSComparisonResult)compare:(DVAxisDescriptor *)otherAxis;


/*!
 @method     
 @abstract   Specific test for axis equality
 @discussion Compares axisNumber and axisScaling.
*/

- (BOOL)isEqualToAxis:(DVAxisDescriptor*)axis;
@end
