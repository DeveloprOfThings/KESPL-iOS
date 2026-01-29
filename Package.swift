// swift-tools-version:5.10
import PackageDescription

let package = Package(
    name: "KESPLFrameworkPackage",
    platforms: [
     .iOS(.v15),
    ],
    products: [
        // Expose a primary library product that makes the individual targets available
        .library(
            name: "KESPLFrameworkPackage",
            targets: ["KESPLKit", "KESPLCallbacksKit"]),
    ],
    targets: [
        // Declare the actual binary targets
        .binaryTarget(
            name: "KESPLKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/v0.9.5/KESPLKit.xcframework.zip",
            checksum: "3785223047860e77fdf8171b50d38b537e924253cd4d71fb987331ce8a6067c2"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/v0.9.5/KESPLCallbacksKit.xcframework.zip",
            checksum: "e9173fd3374aac508c655311d5020127f00eaaabaeafedfc91559bb787891f21"
        )
    ]
)
