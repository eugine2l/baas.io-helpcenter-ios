//
//  AskViewController.h
//  HelpCenter
//
//  Created by 채 선옥 on 12. 10. 19..
//  Copyright (c) 2012년 kthcorp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AskViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, copy) NSString *uuid;

@end
