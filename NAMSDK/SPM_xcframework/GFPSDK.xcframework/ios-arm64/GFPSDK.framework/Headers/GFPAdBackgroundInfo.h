//
//  GFPAdBackgroundInfo.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class GFPNativeStyleInfo;

@protocol GFPAdBackgroundOwnerDelegate <NSObject>
@optional
- (void)showBg:(CGFloat)appearAnimTime;
- (void)showBg:(CGFloat)appearAnimTime delay:(CGFloat)delayTime;
- (void)hideBg:(CGFloat)disAppearAnimTime;
- (void)hideBg:(CGFloat)disAppearAnimTime delay:(CGFloat)delayTime;

- (void)needsToUpdateBg;

- (CGRect)customBackViewFrameToWindow;

@end


@protocol GFPAdBackgroundDataSource <NSObject>
@property (nonatomic, weak) id<GFPAdBackgroundOwnerDelegate> bgOwnerDelegate;
@optional
- (BOOL)forceHideBackground;
- (BOOL)isForcedBackgroundMargin;
- (CGFloat)adBottomMargin;
- (CGFloat)adHeightForBackground;
- (CGFloat)forceMarginForLeft;
- (CGFloat)forceMarginForRight;
- (CGFloat)forceMarginForTop;
- (CGFloat)forceMarginForBottom;
- (BOOL)useRichStyleBackground;
- (UIColor *)mediaViewColor;
@end

NS_ASSUME_NONNULL_END
