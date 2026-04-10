//
//  DVAxisDataDescriptor.h
//  DataView
//
//  Created by Barry Wark on 2/22/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BWKit/BWKit.h>

typedef BWDataType DVDataType;
    
@interface DVDataDescriptor : NSObject {
    BWNumericData *data;
    NSString *label;
    NSString *units;
    NSString *axisDataID;
}

@property (retain,readonly) BWNumericData *data;
@property (copy,readwrite) NSString *label;
@property (copy,readwrite) NSString *units;
@property (copy,readonly) NSString *axisDataID;

- (id)initWithData:(BWNumericData*)theData //retained
             label:(NSString*)theLabel //copied
             units:(NSString*)theUnits; //copied

@end
