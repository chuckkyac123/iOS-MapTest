//
//  ViewController.h
//  MapTest
//
//  Created by Chuckky Bank on 6/5/15.
//  Copyright (c) 2015 Chuckky Bank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeModel.h"

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HomeModelProtocol>

@property (weak, nonatomic) IBOutlet UITableView *listTableView;

@end

