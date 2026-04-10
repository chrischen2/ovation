//
//  AUIModelTreeAdditions.h
//  Ovation
//
//  Created by Barry Wark on 10/9/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <VUIProtocols/DataModelUI.h>

@protocol AUIModelTreeAdditions <DataModelUI>

- (NSString*)treeLabel;
- (void)setTreeLabel:(NSString*)newLabel;
- (NSString*)treeProtocol;
- (NSString*)treeComment;
- (void)setTreeComment:(NSString*)newComment;

@property (assign,readonly) BOOL treeShowIncludeInAnalysis;
@end
