//
//  DWUIWebViewImpl.h
//  hybridmessenger-sample
//
//  Created by 邓伟 on 2018/3/12.
//  Copyright © 2018年 邓伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMWebViewProtocol.h"
#import "HMWebViewBaseImpl.h"
#import <UIKit/UIWebView.h>

@class UIWebView;

@interface HMUIWebViewProtocolImpl : HMWebViewBaseImpl<UIWebViewDelegate>

-(instancetype)initWithUIWebView :(UIWebView*) uiwebview;

@end
