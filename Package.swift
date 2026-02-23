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
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/0.9.6/KESPLKit.xcframework.zip",
            checksum: "ef4b6cacad264ee696f701c60f4e6d543fa227f53c0c47c78a387996c0f14d76"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/0.9.6/KESPLCallbacksKit.xcframework.zip",
            checksum: "5527f0773a155b6ea7bff54c793997ce9eaa02817a9cc4ee3bbf8cf742a2d1b9"
        )
    ]
)
