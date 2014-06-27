//
//  SVModalWebViewController.h
//
//  Created by Oliver Letterer on 13.08.11.
//  Copyright 2011 Home. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <UIKit/UIKit.h>

@interface SVModalWebViewController : UINavigationController <UIToolbarDelegate>

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL *)URL;

@property (nonatomic) UIColor *barsTintColor;
@property (getter = isBarAttached, nonatomic) BOOL barAttached;

@end
