//
//  ViewController.m
//  testapp
//
//  Created by Hayes, Michael on 10/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize calcAreaLabel, calcAreaNumber;
- (void)viewDidLoad {
    [super viewDidLoad];
    [self setCalcAreaNumber:@"0.0"];
    
    [self printCalcAreaLabel];
    
}


@end
