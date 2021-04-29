#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

#import <GoogleMobileAds/GoogleMobileAds.h>

@interface RNAdManagerRewardedAd : RCTEventEmitter <RCTBridgeModule, GADRewardBasedVideoAdDelegate>
@end

