//
//  AwesomeMenu.h
//  wanwang
//
//  Created by Ibokan on 12-11-6.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AwesomeMenuItem.h"

@protocol AwesomeMenuDelegate;

@interface AwesomeMenu : UIView <AwesomeMenuItemDelegate>
{   //形参
    //形参出现在函数定义中，在整个函数体内都可以使用， 离开该函数则不能使用。实参出现在主调函数中，进入被调函数后，实参变量也不能使用。 形参和实参的功能是作数据传送。发生函数调用时,主调函数把实参的值传送给被调函数的形参从而实现主调函数向被调函数的数据传送。
    //1.形参变量只有在被调用时才分配内存单元，在调用结束时， 即刻释放所分配的内存单元。因此，形参只有在函数内部有效。 函数调用结束返回主调函数后则不能再使用该形参变量。 
    //2.实参可以是常量、变量、表达式、函数等， 无论实参是何种类型的量，在进行函数调用时，它们都必须具有确定的值， 以便把这些值传送给形参。 因此应预先用赋值，输入等办法使实参获得确定值。 
    //3.实参和形参在数量上，类型上，顺序上应严格一致， 否则会发生“类型不匹配”的错误。 
    //4.函数调用中发生的数据传送是单向的。 即只能把实参的值传送给形参，而不能把形参的值反向地传送给实参。 因此在函数调用过程中，形参的值发生改变，而实参中的值不会变化。   
    NSArray *_menusArray;
    int _flag;
    NSTimer *_timer;
    AwesomeMenuItem *addButton;
    
    id<AwesomeMenuDelegate>_delegate;
    BOOL _isAnimating;
}
@property (nonatomic, copy) NSArray *menusArray;
@property (nonatomic, getter = isExpanding) BOOL expanding;
@property (nonatomic, assign) id<AwesomeMenuDelegate> delegate;

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *contentImage;
@property (nonatomic, retain) UIImage *highlightedContentImage;

@property (nonatomic, assign) CGFloat nearRadius;
@property (nonatomic, assign) CGFloat endRadius;
@property (nonatomic, assign) CGFloat farRadius;
@property (nonatomic, assign) CGFloat startRadius;
@property (nonatomic, assign) CGFloat timeOffset;
@property (nonatomic, assign) CGFloat rotateAngle;
@property (nonatomic, assign) CGFloat menuWholeAngel;
@property (nonatomic, assign) CGFloat expandRotation;
@property (nonatomic, assign) CGFloat closeRotation;

- (id)initWithFrame:(CGRect)frame menus:(NSArray *)aMenusArray;
@end

@protocol AwesomeMenuDelegate <NSObject>
            
- (void) AwesomeMenu:(AwesomeMenu *)menu didSelectIndex:(NSInteger)idx;

@end

