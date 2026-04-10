/*
 *  DataModelUI.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/29/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

extern NSString * const VUIDataModelUIUpdateRequestedNotification; //sent when UI update is recommended by protocol implementation

@protocol DataModelUI <NSObject>

@property (assign) NSInteger treeIncludeInAnalysis;
@property (assign, readonly) BOOL treeShowIncludeInAnalysis;
@property (readonly) BOOL hasChildren;
@property (readonly) NSSet * treeEpochs;

- (NSSet*)treeChildrenForWorkingEpochs:(NSSet*)workingEpochs
                                 error:(NSError**)err;

- (NSSet*)epochsForWorkingEpochs:(NSSet*)workingEpochs
                           error:(NSError**)err;

@end
