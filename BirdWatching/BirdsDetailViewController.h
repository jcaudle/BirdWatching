//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Joseph Caudle on 5/5/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
