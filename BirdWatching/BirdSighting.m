//
//  BirdSighting.m
//  BirdWatching
//
//  Created by Joseph Caudle on 5/5/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting
@synthesize name = _name, location = _location, date = _date;
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date
{
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}
@end
