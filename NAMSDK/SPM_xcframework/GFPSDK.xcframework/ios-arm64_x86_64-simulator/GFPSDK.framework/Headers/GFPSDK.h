//
//  GFPSDK.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
//

#import <UIKit/UIKit.h>

//! Project version number for GFPSDK.
FOUNDATION_EXPORT double GFPSDKVersionNumber;

//! Project version string for GFPSDK.
FOUNDATION_EXPORT const unsigned char GFPSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GFPSDK/PublicHeader.h>

#import <GFPSDK/GFPAdParam.h>
#import <GFPSDK/GFPUserParam.h>
#import <GFPSDK/GFPAPSAdParam.h>
#import <GFPSDK/GFPContentInfo.h>
#import <GFPSDK/GFPAdManager.h>
#import <GFPSDK/GFPBannerView.h>
#import <GFPSDK/GFPBannerViewDelegate.h>
#import <GFPSDK/GFPBannerAdSize.h>
#import <GFPSDK/GFPNativeAdRenderingSetting.h>
#import <GFPSDK/GFPNativeAd.h>
#import <GFPSDK/GFPNativeAdDelegate.h>
#import <GFPSDK/GFPNativeAdView.h>
#import <GFPSDK/GFPMediaView.h>
#import <GFPSDK/GFPVideoAdQoeInfo.h>
#import <GFPSDK/GFPVideoAdQoeDelegate.h>
#import <GFPSDK/GFPAdConfiguration.h>
#import <GFPSDK/GFPMRAIDSupportSetting.h>
#import <GFPSDK/GFPUserInterestDelegate.h>
#import <GFPSDK/GFPVideoOptions.h>
#import <GFPSDK/GFPLanguageUtils.h>
#import <GFPSDK/GFPNativeTemplateOptions.h>

#import <GFPSDK/GFPVideoAdScheduleManager.h>
#import <GFPSDK/GFPVideoAdScheduleManagerDelegate.h>
#import <GFPSDK/GFPVideoAdBreak.h>
#import <GFPSDK/GFPAdScheduleParam.h>
#import <GFPSDK/GFPAdvertiseParams.h>
#import <GFPSDK/GFPVideoAdInfo.h>
#import <GFPSDK/GFPLoudnessNormalization.h>

#import <GFPSDK/GFPRemindAd.h>
#import <GFPSDK/GFPCreativeExtension.h>
#import <GFPSDK/GFPStaticResource.h>

#import <GFPSDK/GFPAdBannerOptions.h>
#import <GFPSDK/GFPAdLoader.h>
#import <GFPSDK/GFPAdLoaderDelegate.h>

#import <GFPSDK/GFPInterstitialAdAdapting.h>
#import <GFPSDK/GFPBannerAdapting.h>
#import <GFPSDK/GFPInterstitialAdManager.h>
#import <GFPSDK/GFPVideoSchedule.h>
#import <GFPSDK/GFPRewardedAdProviding.h>
#import <GFPSDK/GFPNativeProviding.h>
#import <GFPSDK/GFPInterstitialAdProviding.h>
#import <GFPSDK/GFPVideoProviding.h>
#import <GFPSDK/GFPRewardedAdManagerDelegate.h>
#import <GFPSDK/GFPAdAdaptorParam.h>
#import <GFPSDK/GFPNativeAdaptorDelegate.h>
#import <GFPSDK/GFPInterstitialAd.h>
#import <GFPSDK/GFPProviding.h>
#import <GFPSDK/GFPNonLinearAdView.h>
#import <GFPSDK/GFPVideoAdaptorDelegate.h>
#import <GFPSDK/GFPReward.h>
#import <GFPSDK/GFPRewardedAdAdapting.h>
#import <GFPSDK/GFPInterstitialAdDelegate.h>
#import <GFPSDK/GFPVideoAdaptorQoeDelegate.h>
#import <GFPSDK/GFPNonLinearContainer.h>
#import <GFPSDK/GFPRewardedAdManager.h>
#import <GFPSDK/GFPInterstitialAdManagerDelegate.h>
#import <GFPSDK/GFPVideoCastingView.h>
#import <GFPSDK/GFPCombinedAdapting.h>
#import <GFPSDK/GFPBannerProviding.h>
#import <GFPSDK/GFPNonLinearFactory.h>
#import <GFPSDK/GFPNativeSimpleAdView.h>
#import <GFPSDK/GFPRewardedAd.h>
#import <GFPSDK/GFPNativeAdapting.h>
#import <GFPSDK/GFPAdAdapting.h>
#import <GFPSDK/GFPRewardedAdDelegate.h>
#import <GFPSDK/GFPProvider.h>
#import <GFPSDK/GFPBannerAdaptorDelegate.h>
#import <GFPSDK/GFPRewardedAdAdaptorDelegate.h>
#import <GFPSDK/GFPCombinedProviding.h>
#import <GFPSDK/GFPVideoAdapting.h>
#import <GFPSDK/GFPAdAdaptor.h>
#import <GFPSDK/GFPAdDedupeManager.h>
#import <GFPSDK/GFPVideoController.h>
#import <GFPSDK/GFPVideoEventDelegate.h>
#import <GFPSDK/GFPOMIDInfoProtocol.h>

#import <GFPSDK/GFPInterstitialAdAdaptorDelegate.h>

#import <GFPSDK/GFPConfigDictionaryConverter.h>
#import <GFPSDK/GFPNativeViewUtils.h>
#import <GFPSDK/GFPErrorUtils.h>
#import <GFPSDK/GFPClickLandingUtil.h>
#import <GFPSDK/GFPLoadResponseInfo.h>
#import <GFPSDK/GFPS2SAdClickDelegate.h>


#import <GFPSDK/GFPExtraRequestParam.h>
#import <GFPSDK/GFPNativeContext.h>
#import <GFPSDK/GFPBannerContext.h>
#import <GFPSDK/GFPRewardedAdContext.h>
#import <GFPSDK/GFPInterstitialAdContext.h>

#import <GFPSDK/GFPContext.h>
#import <GFPSDK/GFPWaterfallList.h>


#import <GFPSDK/GFPEvent.h>
#import <GFPSDK/GFPLoadEvent.h>
#import <GFPSDK/GFPStartEvent.h>
#import <GFPSDK/GFPEventExtraInfo.h>
#import <GFPSDK/GFPEventReporter.h>
#import <GFPSDK/GFPCoreConfig.h>
#import <GFPSDK/GFPCachedAdParam.h>
#import <GFPSDK/GFPImpressionTracker.h>
#import <GFPSDK/GFPErrorEventInfo.h>
#import <GFPSDK/GFPAPIRequest.h>
#import <GFPSDK/GFPAPIQueryItems.h>
#import <GFPSDK/GFPAdAttachmentInfo.h>
#import <GFPSDK/GFPVideoAdManager.h>

#import <GFPSDK/GFPRewardedAdManager+WFPreload.h>
#import <GFPSDK/GFPVideoAdManager+WFPreload.h>
#import <GFPSDK/GFPInterstitialAdManager+WFPreload.h>
#import <GFPSDK/GFPAdLoader+WFPreload.h>
#import <GFPSDK/GFPBannerView+WFPreload.h>


//For internal
#import <GFPSDK/Swift-Enum.h>

#import <GFPSDK/GFPExceptionUtils.h>

#import <GFPSDK/GFPNativeAdInfoProtocol.h>
#import <GFPSDK/GFPNativeDetailInfo.h>

#import <GFPSDK/GFPEventReportDelegate.h>

#import <GFPSDK/GFPAdChoicesData.h>


// NDA

#import <GFPSDK/GFPNDAMRAIDUtil.h>
#import <GFPSDK/GFPNDAMRAIDAudioProperties.h>
#import <GFPSDK/GFPResourceUtils.h>
#import <GFPSDK/GFPNDABannerView+MRAID.h>
#import <GFPSDK/GFPNDANativeSimpleAd.h>
#import <GFPSDK/GFPNDAAdMuteReasonView.h>
#import <GFPSDK/GFPNDABannerView+GLAD.h>
#import <GFPSDK/GFPNDAJavascriptUtil.h>
#import <GFPSDK/GFPNDAAdChoiceView.h>
#import <GFPSDK/GFPNDANativeAdaptor.h>
#import <GFPSDK/GFPNDAMediaViewFactory.h>
#import <GFPSDK/GFPNDAFeedbackLoader.h>
#import <GFPSDK/GFPNDAMediaImageView.h>
#import <GFPSDK/GFPNDANativeSimpleAdaptor.h>
#import <GFPSDK/GFPNDAMRAIDPositionProperties.h>
#import <GFPSDK/GFPNDABannerView+JSTAG.h>
#import <GFPSDK/GFPNDAMraidRenderSupporter.h>
#import <GFPSDK/GFPNDAMRAIDJavascriptUtil.h>
#import <GFPSDK/GFPNDABannerViewDelegate.h>
#import <GFPSDK/GFPNDAReasonCollectionViewCell.h>
#import <GFPSDK/GFPNDAMRAIDExpandViewController.h>
#import <GFPSDK/GFPNDAMRAIDResizeViewManager.h>
#import <GFPSDK/GFPMediaCropInfo.h>
#import <GFPSDK/GFPNDAMraidSupportUtil.h>
#import <GFPSDK/GFPNDAMRAIDExecutor.h>
#import <GFPSDK/GFPNDAAdPrivacyIconView.h>
#import <GFPSDK/GFPBannerWebViewConfig.h>
#import <GFPSDK/GFPNDAAdMuteIconView.h>
#import <GFPSDK/GFPNDAMRAIDExpandProperties.h>
#import <GFPSDK/GFPNDAMRAIDResizeView.h>
#import <GFPSDK/GFPNDANativeNormalAd.h>
#import <GFPSDK/GFPNDABannerView+Private.h>
#import <GFPSDK/GFPSDK.h>
#import <GFPSDK/GFPNDABannerView.h>
#import <GFPSDK/GFPNDAMRAIDExposeProperties.h>
#import <GFPSDK/GFPNDANativeTapGesture.h>
#import <GFPSDK/GFPNativeProviderNDA.h>
#import <GFPSDK/GFPNDAAdMuteQuestionView.h>
#import <GFPSDK/GFPNDABannerAdaptor.h>
#import <GFPSDK/GFPNDAUtils.h>
#import <GFPSDK/GFPNDAMRAIDResizeProperties.h>
#import <GFPSDK/GFPNDAMediaThumbnailView.h>
#import <GFPSDK/GFPNDAAdChoiceViewUtils.h>
#import <GFPSDK/GFPNDAAdMuteCompleteView.h>
#import <GFPSDK/GFPNDAAdChoiceResourceUtils.h>
#import <GFPSDK/GFPNDAMRAIDOrientationProperties.h>
#import <GFPSDK/GFPNDANativeAdFactory.h>
#import <GFPSDK/GFPNDAMediaView.h>
#import <GFPSDK/GFPNDANativeAd.h>
#import <GFPSDK/GFPNDAReasonCollectionView.h>
#import <GFPSDK/GFPNDAMraidConfiguration.h>
#import <GFPSDK/GFPNDANativeVisualUtils.h>
#import <GFPSDK/GFPNDARichExtendMeta.h>
#import <GFPSDK/GFPNDASizeUtils.h>
#import <GFPSDK/GFPSchemeCommand.h>
#import <GFPSDK/GFPBannerProviderNDA.h>
#import <GFPSDK/GFPNDAAdMuteView.h>
