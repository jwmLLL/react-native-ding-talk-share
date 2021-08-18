#import <React/RCTBridgeModule.h>
#if __has_include("DTOpenKit.h")
#import "DTOpenKit.h"
#else
#import <DTShareKit/DTOpenKit.h>
#endif

@interface RNDingTalkShareModule : NSObject <RCTBridgeModule, DTOpenAPIDelegate>

@end
