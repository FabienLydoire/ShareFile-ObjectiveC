//
//  SFAccessControlsEntity.h
//
//  Autogenerated by a tool.
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataEntityBase.h"

@class SFAccessControl;
@class SFAccessControlsBulkParams;
@class SFAccessControlsCloneParams;
@class SFNotifyUsersParams;

@interface SFAccessControlsEntity : SFODataEntityBase
{

}

/**
@abstract Get AccessControl by ID
Retrieves a single Access Control entry for a given Item and Principal@return A single AccessControl object matching the query
*/
-(SFApiQuery*)getWithUrl:(NSURL*)url;

/**
@abstract Get AccessControl List By Item
Retrieves the Access Control List for a given Item.	
@param id 	
@return Access Control List of the given object ID.
*/
-(SFApiQuery*)getByItemWithUrl:(NSURL*)url;

/**
@abstract Create AccessControl
@description
{
"Principal":{"url":"https://account.sf-api.com/v3/Groups(id)"},
"CanUpload":true,
"CanDownload":true,
"CanView":true,
"CanDelete":true,
"CanManagePermissions":true,
"Message":"Message"
}
Creates a new Access Controls entry for a given Item. Access controls can only define a single Principal,which can be either a Group or User. The 'Principal' element is specified as an object - you should populateeither the URL or the ID reference.	
@param id 	
@param accessControl 	
@param recursive 	
@param message 	
@param sendDefaultNotification 	
@return the created or modified AccessControl instance
*/
-(SFApiQuery*)createByItemWithUrl:(NSURL*)url accessControl:(SFAccessControl*)accessControl message:(NSString*)message recursive:(NSNumber*)recursive andSendDefaultNotification:(NSNumber*)sendDefaultNotification;

/**
@abstract Update AccessControl
@description
{
"Principal":{"Email":"user@domain.com"},
"CanUpload":true,
"CanDownload":true,
"CanView":true,
"CanDelete":true,
"CanManagePermissions":true
}
Updates an existing Access Controls of a given Item. The Principal element cannot be modified, it is providedin the Body to identity the AccessControl element to be modified. You can provide an ID, Email or URL on thePrincipal object.	
@param id 	
@param accessControl 	
@param recursive 	
@return the created or modified AccessControl instance
*/
-(SFApiQuery*)updateByItemWithUrl:(NSURL*)url accessControl:(SFAccessControl*)accessControl andRecursive:(NSNumber*)recursive;

/**
@abstract Delete AccessControl
Deletes an AccessControl entry by itemID and principalID. This method does not return any object, a 204 (No Content)response indicates success.*/
-(SFApiQuery*)deleteWithUrl:(NSURL*)url;

/**
@abstract Create or Update multiple AccessControls for a given Item
@description
{
"NotifyUser":true,
"NotifyMessage":"msg",

"AccessControlParams":
[
{
"AccessControl":
{
"Principal" : { "Id":"existing_user_id" },
"CanUpload" : true,
"CanDownload" : false,
"CanView" : true
},
"NotifyUser":false
},
{
"AccessControl":
{
"Principal" : { "Id":"group_id" },
"CanUpload" : false,
"CanDownload" : true,
"CanView" : true
},
"Recursive":true
},
{
"AccessControl":
{
"Principal" : { "Email":"new_or_existing_user@a.com" },
"CanUpload" : false,
"CanDownload" : true,
"CanView" : true
}
}
]
}
All the AccessControls are created or updated for a single Item identified by the Item id in the URI. AccessControl.Item Ids are not allowed.If an AccessControl doesn't specify NotifyUser or NotifyMessage property their values are inherited from the correspondingtop-level properties.The Principal can be identified by Id or Email (Users). If a User with the specified email does not exist it will be created.Defaults for NotifyUser and Recursive are false.See AccessControlsBulkParams for other details.	
@param id 	
@param bulkParams 	
@return AccessControlBulkResult
*/
-(SFApiQuery*)bulkSetWithUrl:(NSURL*)url andBulkParams:(SFAccessControlsBulkParams*)bulkParams;

/**
@abstract Update multiple access controls for a single principal
@description
{
"NotifyUser":true,
"NotifyMessage":"msg",

"AccessControlParams":
[
{
"AccessControl":
{
"Item": { "Id": "item-id-1" },
"Principal" : { "Id":"existing_user_id" },
"CanUpload" : true,
"CanDownload" : false,
"CanView" : true
},
"NotifyUser":false
},
{
"AccessControl":
{
"Item": { "Id": "item-id-3" },
"Principal" : { "Id":"group_id" },
"CanUpload" : false,
"CanDownload" : true,
"CanView" : true
},
"Recursive":true
},
{
"AccessControl":
{
"Item": { "Id": "item-id-2" },
"Principal" : { "Email":"new_or_existing_user@a.com" },
"CanUpload" : false,
"CanDownload" : true,
"CanView" : true
}
}
]
}
	
@param principalId 	
@param bulkParams 	
@return AccessControlBulkResult
*/
-(SFApiQuery*)bulkSetForPrincipalWithBulkParams:(SFAccessControlsBulkParams*)bulkParams andPrincipalId:(NSString*)principalId;

/**
@abstract Recursively clones multiple access controls for multiple principals
@description
{
"FolderId":"top-level-folder-id",
"PrincipalId":"source-user-or-group-id",
"ClonePrincipalIds":
[
"clone-user-or-group-id-1",
"clone-user-or-group-id-2",
"clone-user-or-group-id-3"
]
}
	
@param accessControlsCloneParams 	
@return Cloned access controls
*/
-(SFApiQuery*)cloneWithAccessControlsCloneParams:(SFAccessControlsCloneParams*)accessControlsCloneParams;

/**
@abstract Delete multiple access controls
@description
["id1","id2",...]
	
@param folderUrl 	
@param principalIds 	
*/
-(SFApiQuery*)bulkDeleteWithFolderUrl:(NSURL*)folderUrl andPrincipalIds:(NSArray*)principalIds;

/**
@abstract Delete multiple access controls for principal
@description
["id1","id2",...]
	
@param principalId 	
@param folderIds 	
*/
-(SFApiQuery*)bulkDeleteForPrincipalWithFolderIds:(NSArray*)folderIds andPrincipalId:(NSString*)principalId;

/**
@abstract Notify users that they have access to the parent folder
@description
[
{
UserIds: ["id1", "id2"],
CustomMessage: "Message content goes here"
}
]
All users should have access to the parent folder	
@param folderUrl 	
@param notifyUsersParams 	
*/
-(SFApiQuery*)notifyUsersWithFolderUrl:(NSURL*)folderUrl andNotifyUsersParams:(SFNotifyUsersParams*)notifyUsersParams;
@end