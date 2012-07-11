//
//  MasterViewController.h
//  TestApp
//
//  Created by Lorenzo Villarroel on 11/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//adioss
#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
