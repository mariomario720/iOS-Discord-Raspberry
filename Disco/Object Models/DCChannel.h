//
//  DCChannel.h
//  Disco
//
//  Created by Trevir on 3/1/19.
//  Copyright (c) 2019 Trevir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DCGuild.h"

typedef NS_ENUM(NSInteger, DCChannelType) {
	DCChannelTypeGuildText,
	DCChannelTypeDirectMessage,
	DCChannelTypeGuildVoice,
	DCChannelTypeGroupMessage,
	DCChannelTypeGuildCatagory,
};

@interface DCChannel : NSObject

@property DCChannelType channelType;

@property NSString *snowflake;
@property DCGuild *parentGuild;
@property NSString *parentCatagorySnowflake;
@property int sortingPosition;
@property NSArray *permissionOverwrites;

@property NSString *name;
@property NSString *topic;
@property bool isNSFW;

@property NSString *lastMessageSnowflake;

//Properties exclusive to DM channels
@property NSArray *messageRecipients;
@property NSString *messageIconHash;

@end
