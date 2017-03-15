#import "RCTBridgeModule.h"
#import "RCTExceptionsManager.h"
#import "RCTRootView.h"

@interface RNSentry : NSObject <RCTBridgeModule, RCTExceptionsManagerDelegate>

+ (void)installWithRootView:(RCTRootView *)rootView;

@end
