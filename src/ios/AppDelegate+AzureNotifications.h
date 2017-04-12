#import "AppDelegate.h"

@interface AppDelegate(AzureNotifications)

-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceTokenAzure : (NSData *)deviceToken;

-(void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithErrorAzure : (NSError *)error;

-(void)application:(UIApplication *)application didReceiveRemoteNotificationAzure : (NSDictionary *)userInfo;

-(void)application:(UIApplication *)application didRegisterUserNotificationSettingsAzure : (UIUserNotificationSettings *)notificationSettings;

@end