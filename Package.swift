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
            checksum: "4b16e801a4b254ebeaa918c477a34339ea5ffba627d17660db94bf1e59b2a81c"
        ),
        .binaryTarget(
            name: "KESPLCallbacksKit",
            url: "https://github.com/DeveloprOfThings/KESPL-iOS/releases/download/v0.9.5/KESPLCallbacksKit.xcframework.zip",
            checksum: "5c75c648eac1b82943e437a1314681f6c54360504a39d250e658ada48f259b0c"
        )
    ]
)
