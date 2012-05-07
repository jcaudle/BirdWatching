//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Joseph Caudle on 5/6/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
