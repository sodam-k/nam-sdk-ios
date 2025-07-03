//
//  GFPNDARichExtendMeta.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
	

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 모듈 의존성에 의해 NDA에서 관리함.
 * - NDA의 GFPNDAOutstreamThumbView 에서 참조 필요.
 */

@interface GFPNDARichExtendMeta : NSObject

/**
 * RichExtend 버전에 따라 아래와 같이 동작함.
 * - v1: cta 는 vast 파싱값에 따라 노출. rewind는 항상 미노출 (동영상확장형, 동확플)
 * - v2: cta 는 항상 미노출. rewind는 광고 영상 종료 후 노출 (동확플 v2)
 */

@property (nonatomic, readonly, assign) BOOL isCtaHidden;
@property (nonatomic, readonly, assign) BOOL needsToRewind;

@property (nonatomic, assign) CGFloat preferredBottomMargin;
@property (nonatomic, assign) UIViewContentMode thumbnailContentMode;

+ (instancetype)createMetaV1;
+ (instancetype)createMetaV2;

- (instancetype)initWithHideCTA:(BOOL)hideCTA needsToRewind:(BOOL)needsToRewind;
- (instancetype)initWithHideCTA:(BOOL)hideCTA needsToRewind:(BOOL)needsToRewind thumbnailContentMode:(UIViewContentMode)thumbnailContentMode;

@end

NS_ASSUME_NONNULL_END
