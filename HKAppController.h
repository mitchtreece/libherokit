#import "libherokit.h"

typedef enum {
	HKIconSizeSettings = 1,
	HKIconSizeSpringBoard = 2
} HKIconSize;

@class SBApplication;

@interface HKAppController : NSObject

+ (HKAppController *)sharedAppController;

// Returns a BOOL indicating whether SpringBoard is the key application
- (BOOL)isSpringBoardKey;

// Returns the current key application
// If nothing is open, returns SpringBoard
- (SBApplication *)keyApplication;

// Returns the key application's display identifier
- (NSString *)keyApplicationDisplayID;

// Activates a given application
- (void)activateApplication:(SBApplication *)app;

// Activates a given application from it's display identifier
- (void)activateApplicationWithDisplayID:(NSString *)displayID;

// Deactivates the key application (if there is one)
// NOTE: the animated: parameter only applies to iOS 5 at the moment
- (void)deactivateKeyApplicationAnimated:(BOOL)animated;

// Deactivates the key application (if there is one)
// This always sets animated:YES
- (void)deactivateKeyApplication;

// Kills a given application and optionally removes it from the app-switcher
- (void)killApplication:(SBApplication *)app removeFromAppSwitcher:(BOOL)removeFromAppSwitcher;

// Kills a given application
// This always sets removeFromSwitcher:YES
- (void)killApplication:(SBApplication *)app;

// Kills a given application from it's display identifier
- (void)killApplicationWithDisplayID:(NSString *)displayID;

// Returns a UIImage of the specified application's icon
// HKIconSizeSettings = 1, HKIconSizeSpringBoard = 2
- (UIImage *)iconForApplicationWithDisplayID:(NSString *)displayID size:(HKIconSize)size;

@end