//
//  AnalysisRecord.h
//  Ovation
//
//  Created by Barry Wark on 10/20/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Project;

/**
 Implementation for Ovation's VUIDocument.xcdatamodel AnalysisRecord.
 An analysis record encasulates information (data, code, parameters) of an analysis.
 */

@interface AnalysisRecord :  NSManagedObject  
{
}

@property (retain) NSString * analysisScript;
@property (retain) NSNumber * codeRevision;
@property (retain) NSSet * epochURIs;
@property (retain) NSString * name;
@property (retain) NSDictionary * parameters;
@property (retain) id results;
@property (retain) id svnRepositoryURI;
@property (retain) NSDate * timeStamp;
@property (retain) NSString * userDescription;

@property (readonly) NSAttributedString *attributedCodeURL;
@property (readonly) NSString *codeCheckOutCommand;



/**
 Factory method for creating AnalysisRecord instances.
 
 Builds an AnalysisRecord instance in the NSManagedObjectContext of the associated
 Project instance.
 
 @param project Project instance to associate with this AnalysisRecord. 
 @param name The record name.
 @param analysisScript String representing the Matlab (or other) function/script that runs the analysis given the appropriate parameters.
 @param description A (multi-line) description of the record.
 @param parameters An NSDictionary of analysis parameters. Keys must be `NSString` for display.
 @param epochURIStrings NSSet of Epoch.objectID.URIRepresentation instances associated with this analysis.
 @param keywords NSSet of strings for record keywords.
 @param resourceURLs NSSet of resource URLs to link to this record.
 @param rev Code revision for this record.
 @param codeURL NSURL of code repository.
 @param results NSDictionary* of results (optional). May be nil.
 @param[out] err Returned error by reference or nil.
 @exception NSInternalInconsistencyException if parameter's keys are not NSString.
 @return An AnalysisRecord instance or nil if an error occurs.
 */
+ (AnalysisRecord*)insertAnalysisRecordForProject:(Project*)project
                                         withName:(NSString*)name
                                   analysisScript:(NSString*)script
                                      description:(NSString*)description
                                       parameters:(NSDictionary*)parameters
                                          results:(NSDictionary*)results
                                        epochURIs:(NSSet*)epochURIs
                                         keywords:(NSSet*)keywordStrings
                                        resources:(NSSet*)resourceURLs
                                     codeRevision:(NSUInteger)rev
                                          codeURL:(NSURL*)codeURL
                                            error:(NSError**)err;

/**
 * Wrapper that accepts properties in dictionary form and breaks them out into
 * parameters to the factory method.
 *
 * Each parameter to the factory method must appear as a key in the dictionary,
 * except for moc, err, and epochs.  Epochs are assumed to be tagged elsewhere,
 * and so nil is passed for this param.
 *
 * @param props Properties dict keys named as factory params.
 * @param moc VUIModel managed object context.
 * @exception NSError Any error returned by factory method.
 * @exception NSInternalInconsistencyException as thrown by factory method.
 * @return Return of factory.
 */

+ (AnalysisRecord *) insertAnalysisRecordForDictionary: (NSDictionary *) props
                              intoManagedObjectContext: (NSManagedObjectContext *) moc;

@end

@interface AnalysisRecord (CoreDataGeneratedAccessors)
- (void)addKeywordsObject:(NSManagedObject *)value;
- (void)removeKeywordsObject:(NSManagedObject *)value;
- (void)addKeywords:(NSSet *)value;
- (void)removeKeywords:(NSSet *)value;

- (void)addResourcesObject:(NSManagedObject *)value;
- (void)removeResourcesObject:(NSManagedObject *)value;
- (void)addResources:(NSSet *)value;
- (void)removeResources:(NSSet *)value;
@end
