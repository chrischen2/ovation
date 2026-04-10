/*
 *  Epoch.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

#import <VUIProtocols/EpochGroup.h>
#import <VUIProtocols/Stimulus.h>
#import <VUIProtocols/Response.h>
#import <VUIProtocols/FileSystemResource.h>
#import <VUIProtocols/KeywordTaggable.h>


@protocol Epoch <NSObject, KeywordTaggable>

@property (retain) NSString * comment;
@property (retain) NSNumber * duration;
@property (retain) NSNumber * includeInAnalysis;
@property (retain) NSString * protocolID;
@property (retain) NSDictionary *protocolSettings;
@property (retain) NSDate * startDate;
@property (retain) id<EpochGroup> cell;

@property (retain) NSSet* resources;
@property (retain) NSSet* responses;
@property (retain) NSSet* stimuli;

- (void)addResourcesObject:(id<FileSystemResource>)value;
- (void)removeResourcesObject:(id<FileSystemResource>)value;
- (void)addResources:(NSSet *)value;
- (void)removeResources:(NSSet *)value;

- (void)addResponsesObject:(id<Response>)value;
- (void)removeResponsesObject:(id<Response>)value;
- (void)addResponses:(NSSet *)value;
- (void)removeResponses:(NSSet *)value;

- (void)addStimuliObject:(id<Stimulus>)value;
- (void)removeStimuliObject:(id<Stimulus>)value;
- (void)addStimuli:(NSSet *)value;
- (void)removeStimuli:(NSSet *)value;
@end
