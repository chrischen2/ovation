/*
 *  EpochGroup.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

#import <VUIProtocols/Experiment.h>
#import <VUIProtocols/FileSystemResource.h>
#import <VUIProtocols/KeywordTaggable.h>

@protocol Epoch;

@protocol EpochGroup <NSObject>

@property (retain) NSString * comment;
@property (retain) NSString * label;
@property (retain) NSDate * startDate;
@property (retain) NSSet* epochs;
@property (retain) id<Experiment> experiment;

@property (retain) NSSet* resources;

- (void)addEpochsObject:(id<Epoch>)value;
- (void)removeEpochsObject:(id<Epoch>)value;
- (void)addEpochs:(NSSet *)value;
- (void)removeEpochs:(NSSet *)value;

- (void)addResourcesObject:(id<FileSystemResource>)value;
- (void)removeResourcesObject:(id<FileSystemResource>)value;
- (void)addResources:(NSSet *)value;
- (void)removeResources:(NSSet *)value;

@end
