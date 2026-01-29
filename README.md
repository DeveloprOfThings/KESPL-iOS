# KESPL-iOS

This repository serves as the binary distribution point for **KESPL** (Kotlin Entity-System-Pattern Library) for iOS. It hosts the compiled `.xcframework` bundles, allowing for seamless integration via **Swift Package Manager (SPM)**.

For the core logic and multiplatform source code, please visit the primary repository: [DeveloprOfThings/KESPL](https://github.com/DeveloprOfThings/KESPL).

---

## 🚀 Installation

### Swift Package Manager

To add **KESPL** to your Xcode project:

1. Go to **File > Add Packages...**
2. Enter the repository URL: 
   `https://github.com/DeveloprOfThings/KESPL-iOS.git`
3. Select the version or branch you wish to use.
4. Link the library to your desired target.

---

## 🛠 Usage

Once the package is integrated, you can import the framework into your Swift code:

```swift
import KESPL


```

## 📦 How this repo works

This repository does not contain source code. It contains a `Package.swift` file that references the remote .zip archives of `KESPLKit.xcframework` and `KESPLCallbacksKit.xcframework`.

If you are the maintainer and need to update the version:

1. Build the new XCFrameworks in the main repo.
2. Copy the frameworks this repo and commit and push the changes.
3. Create a new Github Release
    1. Trigger SPM Publush action
        1. Zips & calculates checksum for each framework
        2. Attach `.zip`s to Github Release
        3. Updates the `url` and `checksum` for each `binaryTarget` in `Package.swift`.

## 📄 License

This library is distributed under the same license as the core KESPL repository.
