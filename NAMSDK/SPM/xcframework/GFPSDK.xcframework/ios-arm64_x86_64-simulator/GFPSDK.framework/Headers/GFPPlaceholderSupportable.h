//
//  GFPPlaceholderSupportable.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
	

#import <UIKit/UIKit.h>

#import "GFPPlaceholderHandler.h"

NS_ASSUME_NONNULL_BEGIN

@protocol GFPPlaceholderSupportable

@property (nonatomic, weak, nullable) UIImageView *placeholder;

- (void)showPlaceholderWith:(GFPPlaceholderHandler _Nullable)placeholderSetter;
- (void)removePlaceholder;

@end

NS_ASSUME_NONNULL_END
