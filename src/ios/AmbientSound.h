/**
 * Cordova (iOS) plugin for setting the ambient sound setting on device.
 */

#ifdef CORDOVA_FRAMEWORK
#import <CORDOVA/CDVPlugin.h>
#else
#import "CORDOVA/CDVPlugin.h"
#endif

/**
 * Interface which does the actual handling
 */
@interface AmbientSound :CDVPlugin {    
}
/**
 * Sets the idleTimerDisable property to true so that the idle timeout is disabled
 */
- (void) acquire:(CDVInvokedUrlCommand*)command;

/**
 * Sets the idleTimerDisable property to false so that the idle timeout is enabled
 */
- (void) release:(CDVInvokedUrlCommand*)command;

@end
