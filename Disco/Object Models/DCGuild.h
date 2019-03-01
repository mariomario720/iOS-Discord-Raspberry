//
//  DCGuild.h
//  Disco
//
//  Created by Trevir on 3/1/19.
//  Copyright (c) 2019 Trevir. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DCGuild : NSObject

@property NSString *snowflake;
@property int sortingPosition;
@property NSArray *permissions;
@property bool ownedByUser;

@property NSString *name;
@property NSString *iconHash;

@property NSArray *roles;
@property NSArray *emoji;
@property NSArray *members;
@property NSArray *channels;

@property bool isLarge;
@property bool isAvailable;
@property bool sendNotificationForEveryMessage;


@end
