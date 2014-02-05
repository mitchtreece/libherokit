#import "libherokit.h"

@interface HKDeviceController : NSObject

+ (HKDeviceController *)sharedDeviceController;

// Powers the device down
- (void)shutdownDevice;

// Restarts the device
- (void)rebootDevice;

// Resprings the device
- (void)respringDevice;

// Puts the device into mobile substrate safe-mode
- (void)enterSafeMode;

// Locks the device
- (void)lockDevice; 

// Vibrates the device
- (void)vibrateDevice; 

// Sets the screen's brightness level
// level should range between 0 and 1
- (void)setBrightnessLevel:(float)level;

// Toggles the device's LED flash on & off
- (void)toggleLEDFlash;

@end