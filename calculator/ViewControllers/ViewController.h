//
//  ViewController.h
//  testapp
//
//  Created by Hayes, Michael on 10/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    //calulation area display values
    NSString *calcAreaNumber;
    IBOutlet UILabel *calcAreaLabel; // IB is the interface nuilding - connect to storyboard label
   
    
}
@property (strong, nonatomic) NSString *calcAreaNumber;
@property (strong, nonatomic) IBOutlet UILabel *calcAreaLabel;
@end

