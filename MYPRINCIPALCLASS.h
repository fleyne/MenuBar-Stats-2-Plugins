//
//  MBSModuleController.h
//  mbsCPU
//
//  Created by Fabrice Leyne on 10/07/2015.
//  Copyright (c) 2015 Fabrice Leyne. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol mbsPreferencesProtocol
-(id)objectForKey:(NSString*) key forBundleIdentifier:(NSString*) bundleIdentifier;
-(void)removeObjectForKey:(NSString*) key forBundleIdentifier:(NSString*) bundleIdentifier;
-(void)setObject:(id) object forKey:(NSString*) key forBundleIdentifier:(NSString*) bundleIdentifier;
@end

@interface MYPRINCIPALCLASS : NSObject

@property(nonatomic, assign) id mbsPreferencesDefault;

-(NSView*) statusbarView;                   //mandatory
-(NSView*) statusbarCombinedView;           //mandatory
-(NSView*) statusbarStandAloneView;         //optional
-(NSView*) preferencesModuleView;           //optional
-(NSView*) preferenceNotificationView;      //optional
-(NSMenu*) moduleMenuOption;                //optional
-(NSMenu*) moduleMenuPref;                  //optional

-(void)initMainApp;
-(void)initNCApp;

-(void) updateModel;                        //mandatory
-(void) updateViews;                        //mandatory

@end
