//
//  MasterViewController.h
//  DemoForGithub
//
//  Created by Chetan Shah on 07/06/12.
//  Copyright (c) 2012 Elan Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
