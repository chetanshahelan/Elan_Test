//
//  DetailViewController.h
//  DemoForGithub
//
//  Created by Chetan Shah on 07/06/12.
//  Copyright (c) 2012 Elan Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
