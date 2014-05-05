//
//  MasterViewController.h
//  myiTunes
//
//  Created by Jeremy Jones on 2014-05-04.
//  Copyright (c) 2014 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController
{
    NSURL *iTunesURL;
}

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NSURL *iTunesURL;

@end
