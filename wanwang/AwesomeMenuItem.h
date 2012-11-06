//
//  AwesomeMenuItem.h
//  wanwang
//
//  Created by Ibokan on 12-11-6.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol  AwesomeMenuItemDelegate;


@interface AwesomeMenuItem : UIImageView
{
    UIImageView *_contentImageView;
    CGPoint _starPoint;
    CGPoint _endPoint;
    CGPoint _nearPoint;//near
    CGPoint _farPoint;//far
    
    id<AwesomeMenuItemDelegate> _delegate;
}

@property (nonatomic, retain, readonly) UIImageView *contentImageView;
@property (nonatomic) CGPoint startPoint;
@property (nonatomic) CGPoint endPoint;
@property (nonatomic) CGPoint nearPoint;
@property (nonatomic) CGPoint farPoint;

@property (nonatomic, assign) id<AwesomeMenuItemDelegate> delegate;

- (id)initWithImage:(UIImage *)img highlightedImage:(UIImage *)himg ContentImage:(UIImageView *)cimg highlightedContentImage:(UIImage *)hcimg;

@end

@protocol  AwesomeMenuItemDelegate <NSObject>
- (void)AwesomeMenuItemTouchesBegan:(AwesomeMenuItem *)item;
- (void)AwesomeMenuItemTouchesEnd:(AwesomeMenuItem *)item;

@end