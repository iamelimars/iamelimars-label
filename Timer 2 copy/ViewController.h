//
//  ViewController.h
//  Timer 2
//
//  Created by iMac on 9/13/15.
//  Copyright (c) 2015 Marshall. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{

    NSTimer *timer;
    int countInt;
    
}

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)startCount:(id)sender;


- (IBAction)stopCount:(id)sender;


@end

