//
//  KeywordTaggable.h
//  Ovation
//
//  Created by Barry Wark on 8/14/09.
//  Copyright 2009 Barry Wark. All rights reserved.
//

#import <VUIProtocols/KeywordTag.h>

@protocol KeywordTaggable

@property (retain) NSSet* keywords;

- (void)addKeywordsObject:(id<KeywordTag>)value;
- (void)removeKeywordsObject:(id<KeywordTag>)value;
- (void)addKeywords:(NSSet *)value;
- (void)removeKeywords:(NSSet *)value;
@end
