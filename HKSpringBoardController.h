#import "libherokit.h"

@interface HKSpringBoardController : NSObject

+ (HKSpringBoardController *)sharedSpringBoardController;

// Opens spotlight search
- (void)openSpotlight;

// Toggles the switcher on & off
- (void)toggleAppSwitcher;

// Toggles Siri on & off.
// If device doesn't have Siri, voice-controls will be used instead
- (void)toggleSiri;

// Toggles notification center
- (void)toggleNotificationCenter;

// Shows a standard system HUD with a given image, title, and subtitle
// HUD will be dismissed after specified delay
- (void)showHUDWithImage:(UIImage *)image title:(NSString *)title subtitle:(NSString *)subtitle dismissAfterDelay:(NSTimeInterval)delay;

@end