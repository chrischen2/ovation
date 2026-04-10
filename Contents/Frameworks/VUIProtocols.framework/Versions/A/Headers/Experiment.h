/*
 *  Experiment.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

#import <VUIProtocols/FileSystemResource.h>
#import <VUIProtocols/KeywordTaggable.h>

@protocol Note;
@protocol EpochGroup;

@protocol Experiment <NSObject,KeywordTaggable>

@property (retain) NSDate * startDate;
@property (retain) NSSet* cells;
@property (retain) NSSet* notes;
@property (retain) NSSet* resources;
@property (retain) id<FileSystemResource> responseDataFile;

- (void)addCellsObject:(id<EpochGroup>)value;
- (void)removeCellsObject:(id<EpochGroup>)value;
- (void)addCells:(NSSet *)value;
- (void)removeCells:(NSSet *)value;

- (void)addNotesObject:(id<Note>)value;
- (void)removeNotesObject:(id<Note>)value;
- (void)addNotes:(NSSet *)value;
- (void)removeNotes:(NSSet *)value;

- (void)addResourcesObject:(id<FileSystemResource>)value;
- (void)removeResourcesObject:(id<FileSystemResource>)value;
- (void)addResources:(NSSet *)value;
- (void)removeResources:(NSSet *)value;
@end