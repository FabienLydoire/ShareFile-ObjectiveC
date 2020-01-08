//
// SFIPrincipal.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFIODataObject.h"


@interface SFIPrincipal : SFIODataObject
{
}

/**
   User name
 */
@property (nonatomic, strong) NSString *Name;
/**
   Email address
 */
@property (nonatomic, strong) NSString *Email;
/**
   Username for the account - the value used for login. This is the same as Email for ShareFile accounts, but
   may be different on Connectors
 */
@property (nonatomic, strong) NSString *Username;
/**
   Account domain
 */
@property (nonatomic, strong) NSString *Domain;


@end