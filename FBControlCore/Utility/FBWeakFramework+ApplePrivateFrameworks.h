/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <FBControlCore/FBWeakFramework.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Creates FBWeakFrameworks that represents Apple's private frameworks with paths relative to developer directory (pointed by `xcode-select -p`).
 */
@interface FBWeakFramework (ApplePrivateFrameworks)

/**
 XCode Frameworks.
 */
+ (instancetype)CoreSimulator;
+ (instancetype)SimulatorKit;
+ (instancetype)DTXConnectionServices;
+ (instancetype)DVTFoundation;
+ (instancetype)IDEFoundation;
+ (instancetype)IDEiOSSupportCore;
+ (instancetype)IBAutolayoutFoundation;
+ (instancetype)IDEKit;
+ (instancetype)IDESourceEditor;
+ (instancetype)DFRSupportKit;
+ (instancetype)DVTKit;

/**
 XCTest framework for MacOSX
 */
+ (instancetype)XCTest;

/**
 Frameworks bundled with the 'Apple Configuration' App
 */
+ (instancetype)ConfigurationUtilityKit;
+ (instancetype)ConfigurationProfile;

/**
 System Private Frameworks
 */
+ (instancetype)MobileDevice;
+ (instancetype)DeviceLink;

@end

NS_ASSUME_NONNULL_END
