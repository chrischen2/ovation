/*
 *  Response.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

#import <VUIProtocols/IOBase.h>

@protocol Response <IOBase>

- (NSTimeInterval)duration;

@end
