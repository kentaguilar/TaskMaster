//
//  ModelController.h
//  TaskMaster
//
//  Created by Felspar on 1/23/17.
//  Copyright (c) 2017 Felspar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

