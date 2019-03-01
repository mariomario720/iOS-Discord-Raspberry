//
//  DCMessage.h
//  Disco
//
//  Created by Trevir on 3/1/19.
//  Copyright (c) 2019 Trevir. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DCMessage : NSObject

@property NSString *snowflake;
@property DCChannel *parentChannel;
@property DCChannel *parentGuild;
@property DCUser *author;
@property DCUser *member;
@property

@end
