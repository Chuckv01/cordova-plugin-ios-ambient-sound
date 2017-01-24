/**
 * Cordova (iOS) plugin for setting the ambient sound setting on the device
 */
#import "AmbientSound.h"
#import <Cordova/CDV.h>
#import <AVFoundation/AVFoundation.h>

@implementation AmbientSound
- (void)pluginInitialize {
	NSLog(@"Setting ambient sound");
	NSError *setCategoryError = nil;
	BOOL success = [[AVAudioSession sharedInstance] setCategory: AVAudioSessionCategoryAmbient error: &setCategoryError];
	if (!success) {
		NSLog(@"AVAudioSession EROR");
	}
}
@end
