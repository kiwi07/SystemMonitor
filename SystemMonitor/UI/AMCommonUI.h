//
//  AMCommonUI.h
//  System Monitor
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//  Copyright (c) 2014 Arvydas Sidorenko
//

#import <Foundation/Foundation.h>

@interface AMCommonUI : NSObject
+ (UIView *)mainMenuBackgroundView;
+ (UIView *)sectionBackgroundView;
+ (UIView *)showActionSheetSimulationInViewController:(UIViewController *)viewController WithPickerView:(UIPickerView *)pickerView withToolbar:(UIToolbar *)pickerToolbar;
+ (void)dismissActionSheetSimulationInViewController:(UIViewController *)viewController simulation:(UIView*)actionSheetSimulation;
@end
