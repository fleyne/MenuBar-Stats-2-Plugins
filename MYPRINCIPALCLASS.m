//
//  MYPRINCIPALCLASS.m
//  
//
//  Created by Fabrice Leyne on 10/07/2015.
//  Copyright (c) 2015 Fabrice Leyne. All rights reserved.
//

#import "MYPRINCIPALCLASS.h"

@implementation MYPRINCIPALCLASS

-(instancetype)init
{
    self = [super init];
    
    if(self){
        
    }
    
    return self;
}


-(NSString*) MBSLoc:(NSString *) aKey
{
    return NSLocalizedStringFromTableInBundle(aKey,
                                              @"Localizable",
                                              [NSBundle bundleForClass:[self class]],
                                              nil);
}


-(void)initMainApp
{
}


-(void)dealloc
{
}



-(NSView*) statusbarView
{
    return nil;
}

-(NSView*) statusbarCombinedView
{
    return nil;
}

-(NSView*) statusbarStandAloneView
{
    return nil;
}


-(NSView*) preferencesModuleView
{
   return nil;
}

-(NSView*) preferenceNotificationView
{
   return nil;
}

-(NSMenu*) moduleMenuOption
{
    return nil;
}


-(NSMenu*) moduleMenuPref;
{
    return nil;
}

-(void) updateModel
{
    
}

-(void) updateViews
{
}



@end
