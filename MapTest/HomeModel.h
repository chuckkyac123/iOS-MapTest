//
//  HomeModel.h
//  MapTest
//
//  Created by Chuckky Bank on 6/5/15.
//  Copyright (c) 2015 Chuckky Bank. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HomeModelProtocol <NSObject>

- (void)itemsDownloaded:(NSArray *)items;

@end

@interface HomeModel : NSObject <NSURLConnectionDelegate>

@property (nonatomic, weak) id<HomeModelProtocol> delegate;

- (void)downloadItems;

@end
