//
//  MRAppDelegate.h
//  InitialTestingApp1
//
//  Created by Mark Rubeo on 5/25/13.
//  Copyright (c) 2013 Mark Rubeo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
