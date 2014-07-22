//
//  BNRAppDelegate.h
//  iTahDoodle
//
//  Created by Chase Gosingtian on 7/22/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *docPath(void); //C helper function

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate>
{
    UITableView * taskTable;
    UITextField * taskField;
    UIButton * insertButton;
    
    NSMutableArray * tasks;
}

- (void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
