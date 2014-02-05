#import "libherokit.h"

@interface HKStackController : NSObject

+ (HKStackController *)sharedStackController;

// Returns the preActive display stack
- (SBDisplayStack *)preActivateDisplayStack;

// Returns the active display stack
- (SBDisplayStack *)activeDisplayStack;

// Returns the suspending display stack
- (SBDisplayStack *)suspendingDisplayStack;

// Returns the suspendedEventOnly display stack
- (SBDisplayStack *)suspendedEventOnlyDisplayStack;

@end