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
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/0.9.5/KESPLKit.xcframework.zip",
            checksum: "35e81efb77289833e89ef83d2bf6cc5d60eb1c5ddfa14d49e57c0627125af5c8"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/0.9.5/KESPLCallbacksKit.xcframework.zip",
            checksum: "da0566da409079172ca5b409b9cacb098a74d01d4570bc16cea920bae36e7cbf"
        )
    ]
)
