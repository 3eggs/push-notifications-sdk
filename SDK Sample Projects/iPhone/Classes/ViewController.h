//
//  ViewController.h
//  PushNotificationsApp
//
//  (c) Pushwoosh 2012
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "PushNotificationManager.h"

@interface ViewController : UIViewController<UITextFieldDelegate, CLLocationManagerDelegate, PushNotificationDelegate> {
	CLLocationManager *locationManager;
	NSOperationQueue *operationQueue;
}

@property (nonatomic, retain) IBOutlet UITextField *aliasField;
@property (nonatomic, retain) IBOutlet UITextField *favNumField;
@property (nonatomic, retain) IBOutlet UILabel *statusLabel;

- (IBAction) submitAction:(id)sender;


//succesfully registered for push notifications
- (void) onDidRegisterForRemoteNotificationsWithDeviceToken:(NSString *)token;

//failed to register for push notifications
- (void) onDidFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

//user pressed OK on the push notification
- (void) onPushAccepted:(PushNotificationManager *)pushManager withNotification:(NSDictionary *)pushNotification;


@end
