//
//  SULAppDelegate.h
//  SUtilLib
//
//  Created by Sohel Dadia on 6/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SULAppDelegate : UIResponder <UIApplicationDelegate>
{
    UITabBarController*      mTabBarController;
}
@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController*    tabBarController;

@end
