//
//  BWFileSystemResource+VUIModel.h
//  Ovation
//
//  Created by Barry Wark on 3/27/09.
//  Copyright 2009 Barry Wark. All rights reserved.
//

#import <BWKit/BWFileSystemResource.h>

@class Project;
@class AnalysisRecord;

@interface BWFileSystemResource (VUIModel)
@property (retain) Project * project;
@property (retain) AnalysisRecord * AnalysisRecord;
@property (retain) NSSet* keywords;

@end

// coalesce these into one @interface BWFileSystemResource (CoreDataGeneratedAccessors) section
@interface BWFileSystemResource (VUIModelCoreDataGeneratedAccessors)
- (void)addKeywordsObject:(KeywordTag *)value;
- (void)removeKeywordsObject:(KeywordTag *)value;
- (void)addKeywords:(NSSet *)value;
- (void)removeKeywords:(NSSet *)value;
@end
