//
//  DetailViewController.h
//  myiTunes
//
//  Created by Jeremy Jones on 2014-05-04.
//  Copyright (c) 2014 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
