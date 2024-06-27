//
//  AppDelegate.m
//  addressList2
//
//  Created by 杨莎莎 on 2021/6/29.
//

#import "AppDelegate.h"
#import "TableViewController.h"
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    TableViewController *viewController = [[TableViewController alloc] init];
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:viewController];
    self.window.rootViewController = self.navigationController;
    [self.window makeKeyAndVisible];
    return YES;
}

@end
