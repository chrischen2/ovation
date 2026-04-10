/*
 *  Note.h
 *  Ovation
 *
 *  Created by Barry Wark on 4/28/09.
 *  Copyright 2009 Barry Wark. All rights reserved.
 *
 */

@protocol Experiment;

@protocol Note <NSObject>

@property (retain) NSDate * date;
@property (retain) NSString * text;
@property (retain) id<Experiment> experiment;

@end
