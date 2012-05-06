//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Joseph Caudle on 5/5/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;
@end
