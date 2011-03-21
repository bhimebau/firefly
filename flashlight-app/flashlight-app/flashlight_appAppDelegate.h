//
//  flashlight_appAppDelegate.h
//  flashlight-app
//
//  Created by Bryce Himebaugh on 3/20/11.
//  Copyright 2011 Indiana University School of Informatics and Computing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface flashlight_appAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
