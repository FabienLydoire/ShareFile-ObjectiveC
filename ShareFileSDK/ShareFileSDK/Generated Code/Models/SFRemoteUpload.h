//
// SFRemoteUpload.h
// 
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"


@interface SFRemoteUpload : SFODataObject
{

}

/**
The Name of this Remote Upload.
*/
@property (nonatomic, strong) NSString *Name;
/**
Uri to access the Remote Upload through the Web portal
*/
@property (nonatomic, strong) NSString *Uri;
/**
Indicates whether the Remote Upload is public or not.
One File Drop on your account can be marked as public, meaning that it is accessible from the short link https://example.sharefile.com/filedrop.
Any additional File Drops on your account can be linked to on your web site using the link at the top of this page
*/
@property (nonatomic, strong) NSNumber *IsPublic;
/**
Indicates whether the Remote Upload requires user information ( first name, last name, email , company).
*/
@property (nonatomic, strong) NSNumber *RequireUserInfo;
/**
When it's true, visitors of this Remote Upload can select a recipient from a list.
*/
@property (nonatomic, strong) NSNumber *SelectRecipient;
/**
Users who can have access to this Remote Upload.
*/
@property (nonatomic, strong) NSArray *Users;


@end