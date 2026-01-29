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
            targets: ["KESPLKitWrapper", "KESPLCallbacksKitWrapper"]),
    ],
    targets: [
        // Define a wrapper target for KESPLKit to allow for potential future source code
        .target(
            name: "KESPLKitWrapper",
            dependencies: ["KESPLKit"]),
        // Define a wrapper target for KESPLCallbacksKit
        .target(
            name: "KESPLCallbacksKitWrapper",
            dependencies: ["KESPLCallbacksKit"]),

        // Declare the actual binary targets
        .binaryTarget(
            name: "KESPLKit",
            url: "https://github.com",
            checksum: "the-checksum-for-frameworkA"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com",
            checksum: "the-checksum-for-frameworkB"
        )
    ]
)
