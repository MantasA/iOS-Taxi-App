//
//  TxAModelController.h
//  TaxiApp
//
//  Created by Mantas Antropikas on 19/02/2014.
//  Copyright (c) 2014 Mantas Antropikas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TxADataViewController;

@interface TxAModelController : NSObject <UIPageViewControllerDataSource>

- (TxADataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(TxADataViewController *)viewController;

@end
