//
//  DCUser.h
//  Disco
//
//  Created by Trevir on 3/1/19.
//  Copyright (c) 2019 Trevir. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DCUser : NSObject

@property NSString *snowflake;
@property NSString *username;
@property NSString *discriminator;
@property NSString *avatarHash;
@property bool isBot;

@end
