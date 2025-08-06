//
//  GFPAdSkipInfo.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GFPAdSkipData : NSObject

@property (nonatomic, readonly, assign) NSTimeInterval min;
@property (nonatomic, readonly, assign) NSTimeInterval after;

- (instancetype _Nullable)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithDictionary:(NSDictionary *_Nullable)dict NS_DESIGNATED_INITIALIZER;

@end


@interface GFPAdSkipInfo : NSObject

@property (nonatomic, readonly, assign) BOOL useVastSkip;
@property (nonatomic, readonly, assign) NSTimeInterval skipMin;
@property (nonatomic, readonly, assign) NSTimeInterval skipAfter;

@property (nonatomic, readonly, assign) BOOL isValidSkip;

- (instancetype _Nullable)init NS_UNAVAILABLE;

- (instancetype)initWith:(BOOL)vastSkippable data:(GFPAdSkipData * _Nullable)data NS_DESIGNATED_INITIALIZER;

@end


NS_ASSUME_NONNULL_END
