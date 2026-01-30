// swift-tools-version:5.10
import PackageDescription

let package = Package(
    name: "KESPL-iOS",
    platforms: [
     .iOS(.v15),
    ],
    products: [
        // Now you have two distinct products to choose from
        .library(
            name: "KESPLKit",
            targets: ["KESPLKit"]),
        .library(
            name: "KESPLCallbacksKit",
            targets: ["KESPLCallbacksKit"]),
    ],
    
    targets: [
        // Declare the actual binary targets
        .binaryTarget(
            name: "KESPLKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/v0.9.5/KESPLKit.xcframework.zip",
            checksum: "b9bfce095afb7c22fc8e7a4d9b01a668116f57b93d2187ac2dba46ea7cae3952"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/v0.9.5/KESPLCallbacksKit.xcframework.zip",
            checksum: "1a008d8eddeafda3155e65a453bc7a0a5e0cbee51d1ad871b82142d14d98925c"
        )
    ]
)
