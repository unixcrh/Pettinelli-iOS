//
//  Detail.h
//  
//
//  Created by Andrea Barbon on 30/08/12.
//  Copyright (c) 2012 fractalsoft srl. All rights reserved.
//

#import <SDWebImage/UIImageView+WebCache.h>
#import "BrowserViewController.h"

@interface Detail : BrowserViewController <UIScrollViewDelegate> {
    
    IBOutlet UILabel *titleLabel;
    IBOutlet UIImageView *imageView;
    IBOutlet UIWebView *webView;
    IBOutlet UIScrollView *sv;
}

@property(nonatomic, retain) NSString *image;
@property(nonatomic, retain) NSString *body;



@end