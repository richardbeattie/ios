//
//  CPABeacon.m
//  CoolestProjects
//
//  Created by Rich on 16/04/2017.
//  Copyright © 2017 coderdojo. All rights reserved.
//

#import "CPABeacon.h"

@implementation CPABeacon

+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return [propertyName isEqualToString:@"minor"];
}

- (instancetype)init {
    self = [super init];
    if (self) {
        self.name = @"";
        self.uuid = [[[NSUUID alloc] init] UUIDString];
        self.major = @1;
    }
    return self;
}

@end
