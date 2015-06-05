//
//  DetailViewController.h
//  MapTest
//
//  Created by Chuckky Bank on 6/5/15.
//  Copyright (c) 2015 Chuckky Bank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Location.h"

@interface DetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@property (strong, nonatomic) Location *selectedLocation;
@property (weak, nonatomic) IBOutlet UIButton *getCurrentLocation;

@end
