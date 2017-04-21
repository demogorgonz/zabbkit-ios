//
//  EventsDataSourceManager.h
//  Zabbkit
//
//  Created by Alexey Dozortsev on 12.09.13.
//  Copyright (c) 2013 CactusSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OverviewDataSource.h"

@interface EventsDataSourceManager : NSObject <OverviewDataSource>

- (id)initWithOwnerController:(UIViewController*)owner tableView:(UITableView*)tableView;

@end
