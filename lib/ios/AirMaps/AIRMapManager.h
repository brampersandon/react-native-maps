/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <React/RCTViewManager.h>
#import <React/RCTConvert+MapKit.h>

@interface AIRMapManager : RCTViewManager

@property (nonatomic, assign) NSInteger insetTop;
@property (nonatomic, assign) NSInteger insetBottom;
@property (nonatomic, assign) NSInteger insetLeft;
@property (nonatomic, assign) NSInteger insetRight;

- (UIEdgeInsets) getEdgeInsets;
+ (MKMapRect) getMKMapRectFromMKCoordinateRegion: (MKCoordinateRegion)region;

@end
