#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <libherokit/libherokit.h>
#import <libactivator/libactivator.h>

@interface HKListener : NSObject <LAListener>
@end

@implementation HKListener

+ (void)load
{
	[[LAActivator sharedInstance] registerListener:[self new] forName:@"com.mitchtreece.liberokit-example"];
	[[LAActivator sharedInstance] assignEvent:[LAEvent eventWithName:@"libactivator.menu.press.triple"] toListenerWithName:@"com.mitchtreece.libherokit-example"];
}

- (void)activator:(LAActivator *)activator receiveEvent:(LAEvent *)event
{
	/*
	NSString *displayID = [[HKAppController sharedAppController] keyApplicationDisplayID];
	NSString *message = [NSString stringWithFormat:@"key application: %@", displayID];
	UIAlertView *a = [[[UIAlertView alloc] init] autorelease];
	a.title = @"libherokit";
	a.message = message;
	[a addButtonWithTitle:@"Dismiss"];
	[a show];
	*/
	
	[[HKAppController sharedAppController] activateApplicationWithDisplayID:@"com.saurik.Cydia"];
	[event setHandled:YES];
}

@end