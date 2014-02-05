#import "libherokit.h"

@interface HKScreenController : NSObject

+ (HKScreenController *)sharedScreenController;

// Returns a UIImage with the contents of the current screen
- (UIImage *)currentScreenImage;

@end