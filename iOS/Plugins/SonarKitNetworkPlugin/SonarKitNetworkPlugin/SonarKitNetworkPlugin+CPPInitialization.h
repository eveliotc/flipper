/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#if FB_SONARKIT_ENABLED

#pragma once
#import "SonarKitNetworkPlugin.h"
#import "SKDispatchQueue.h"
#import <memory>

@interface SonarKitNetworkPlugin(CPPInitialization)
- (instancetype)initWithNetworkAdapter:(id<SKNetworkAdapterDelegate>)adapter dispatchQueue:(std::shared_ptr<facebook::sonar::DispatchQueue>)queue;
@end
#endif
