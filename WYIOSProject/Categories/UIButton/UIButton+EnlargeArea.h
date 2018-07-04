//
// Created by Huang ChienShuo on 4/27/13.
// Copyright (c) 2013 ThousandSquare. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIButton(EnlargeArea)

- (void)setEnlargeEdgeDefault; // Scale6Y(88)

- (void)setEnlargeEdge:(CGFloat) edge;

- (void)setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end
