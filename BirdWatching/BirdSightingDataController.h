//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Joseph Caudle on 5/5/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSInteger)theIndex;
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;
@end
