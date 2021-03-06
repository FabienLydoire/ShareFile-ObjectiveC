//
// SFGenericConfig.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFUser;

@interface SFGenericConfig : SFODataObject
{
}

@property (nonatomic, strong) SFUser *User;
@property (nonatomic, strong) NSString *ConfigName;
@property (nonatomic, strong) NSNumber *ConfigSize;
@property (nonatomic, strong) NSDate *CreationDate;
@property (nonatomic, strong) NSDate *ModifiedDate;
@property (nonatomic, strong) NSString *Config;


@end
