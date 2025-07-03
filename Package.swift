// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GFPSDK",
    defaultLocalization: "en",

    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "GFPSDK",
            type: .static,
            targets: ["Core", "AdRenderer_Resource", "MediationNDA_Resource", "MediationNDAVideo_Resource"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/robbiehanson/KissXML.git", exact: "5.3.3"),
        .package(url: "https://github.com/naver/nas-sdk-ios.git", exact: "1.1.2-test")
    ],
    targets: [
        // core
        .binaryTarget(
            name: "Core_Binary",
            path: "NAMSDK/SPM_xcframework/GFPSDK.xcframework"
        ),
        .binaryTarget (
            name: "OMSDK_Binary",
            path: "NAMSDK/xcframework/libraries/OMSDK_Navercorp.xcframework"
        ),
        .target(
            name: "Core",
            dependencies: [
                "Core_Binary",
                "OMSDK_Binary",
                "KissXML",

                .product(name: "NaverAdsServices", package: "nas-sdk-ios")
            ],
            path: "NAMSDK/SPM_Dummy/Core",
            resources: [
                .copy("../../resourcebundle/GFPSDKResource.bundle"),
                .copy("../../xcframework/GFPSDK.xcframework/ios-arm64/GFPSDK.framework/PrivacyInfo.xcprivacy")
            ]
        ),
        .target(
            name: "AdRenderer_Resource",
            path: "NAMSDK/SPM_Dummy/AdRenderer",
            resources: [
                .copy("../../resourcebundle/GFPSDKRendererResource.bundle")
            ]
        ),
        .target(
            name: "MediationNDA_Resource",
            path: "NAMSDK/SPM_Dummy/MediationNDA",
            resources: [
                .copy("../../resourcebundle/GFPNDAMraidResource.bundle"),
                .copy("../../resourcebundle/GFPNDANativeResource.bundle")
            ]
        ),
        .target(
            name: "MediationNDAVideo_Resource",
            path: "NAMSDK/SPM_Dummy/MediationNDAVideo",
            resources: [
                .copy("../../resourcebundle/GFPNDAVideoResource.bundle"),
                .copy("../../resourcebundle/GFPNDANativeResource.bundle")
            ]
        ),
        
        // Test
        .testTarget(
            name: "GFPSDKTests",
            dependencies: ["Core", "AdRenderer_Resource", "MediationNDA_Resource", "MediationNDAVideo_Resource"],
            path: "NAMSDK/SPM_Tests"
        )
    ]
)
