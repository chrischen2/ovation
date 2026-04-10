/*
 *  FileSystemResource.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

#import <VUIProtocols/KeywordTag.h>
#import <VUIProtocols/KeywordTaggable.h>

@protocol FileSystemResource <NSObject, KeywordTaggable>

@property (retain) id alias;
@property (retain) NSString * comment;
@property (retain) NSURL * relativeURL;

@end