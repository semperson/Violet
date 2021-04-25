#import <UIKit/UIKit.h>
#import <MediaRemote/MediaRemote.h>
#import <Cephei/HBPreferences.h>

HBPreferences* preferences;

UIImage* currentArtwork;
UIImageView* lsArtworkBackgroundImageView;
UIImageView* lspArtworkBackgroundImageView;
UIImageView* hsArtworkBackgroundImageView;
UIImageView* ccArtworkBackgroundImageView;
UIImageView* ccmArtworkBackgroundImageView;
UIImageView* musicArtworkBackgroundImageView;
UIVisualEffectView* lsBlurView;
UIBlurEffect* lsBlur;
UIVisualEffectView* lspBlurView;
UIBlurEffect* lspBlur;
UIVisualEffectView* hsBlurView;
UIBlurEffect* hsBlur;
UIVisualEffectView* ccBlurView;
UIBlurEffect* ccBlur;
UIVisualEffectView* ccmBlurView;
UIBlurEffect* ccmBlur;
UIView* lsDimView;
UIView* lspDimView;
UIView* hsDimView;
UIView* ccDimView;
UIView* ccmDimView;

extern BOOL enabled;
extern BOOL enableLockscreenSection;
extern BOOL enableHomescreenSection;
extern BOOL enableControlCenterSection;

// Lockscreen
BOOL lockscreenArtworkBackgroundSwitch = NO;
NSString* lockscreenArtworkBlurMode = @"0";
NSString* lockscreenArtworkBlurAmountValue = @"1.0";
NSString* lockscreenArtworkOpacityValue = @"1.0";
NSString* lockscreenArtworkDimValue = @"0.0";
BOOL lockscreenArtworkBackgroundTransitionSwitch = NO;
BOOL lockscreenPlayerArtworkBackgroundSwitch = NO;
NSString* lockscreenPlayerArtworkBlurMode = @"0";
NSString* lockscreenPlayerArtworkBlurAmountValue = @"1.0";
NSString* lockscreenPlayerArtworkOpacityValue = @"1.0";
NSString* lockscreenPlayerArtworkCornerRadiusValue = @"13.0";
NSString* lockscreenPlayerArtworkDimValue = @"0.0";
BOOL lockscreenPlayerArtworkBackgroundTransitionSwitch = NO;
BOOL hideLockscreenPlayerBackgroundSwitch = NO;

// Homescreen
BOOL homescreenArtworkBackgroundSwitch = NO;
NSString* homescreenArtworkBlurMode = @"0";
NSString* homescreenArtworkBlurAmountValue = @"1.0";
NSString* homescreenArtworkOpacityValue = @"1.0";
NSString* homescreenArtworkDimValue = @"0.0";
BOOL homescreenArtworkBackgroundTransitionSwitch = NO;
BOOL zoomedViewSwitch = YES;

// Control Center
BOOL controlCenterArtworkBackgroundSwitch = NO;
NSString* controlCenterArtworkBlurMode = @"0";
NSString* controlCenterArtworkBlurAmountValue = @"1.0";
NSString* controlCenterArtworkOpacityValue = @"1.0";
NSString* controlCenterArtworkDimValue = @"1.0";
BOOL controlCenterArtworkBackgroundTransitionSwitch = NO;
BOOL controlCenterModuleArtworkBackgroundSwitch = NO;
NSString* controlCenterModuleArtworkBlurMode = @"0";
NSString* controlCenterModuleArtworkBlurAmountValue = @"1.0";
NSString* controlCenterModuleArtworkOpacityValue = @"1.0";
NSString* controlCenterModuleArtworkDimValue = @"1.0";
BOOL controlCenterModuleArtworkBackgroundTransitionSwitch =  NO;

@interface CSCoverSheetViewController : UIViewController
@end

@interface MRPlatterViewController : UIViewController
@property(nonatomic, copy)NSString* label;
- (void)setMaterialViewBackground;
- (void)clearMaterialViewBackground;
@end

@interface MRUNowPlayingViewController : UIViewController
@property(assign, nonatomic)long long context;
- (void)setMaterialViewBackground;
- (void)clearMaterialViewBackground;
@end

@interface CSAdjunctItemView : UIView
@end

@interface MTMaterialView : UIView
@end

@interface CABackdropLayer : CALayer
@property(assign)double scale;
- (void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(BOOL)arg2;
@end

@interface MTMaterialLayer : CABackdropLayer
@end

@interface UIView (Violet)
@property(nonatomic, assign, readwrite)MTMaterialView* backgroundMaterialView;
@end

@interface SBIconController : UIViewController
@end

@interface CCUIModularControlCenterOverlayViewController : UIViewController
@end

@interface CCUIContentModuleContentContainerView : UIView
@property(assign, nonatomic)double compactContinuousCornerRadius;
@end

@interface CCUIContentModuleContainerViewController : UIViewController
@property(nonatomic, retain)UIViewController* contentViewController;
@property(nonatomic, readonly)CCUIContentModuleContentContainerView* moduleContentView;
- (NSString *)moduleIdentifier;
@end

@interface SBMediaController : NSObject
+ (id)sharedInstance;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)setNowPlayingInfo:(id)arg1;
@end