#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/




NS_ASSUME_NONNULL_BEGIN

@interface SWGUserManagedObject : NSManagedObject


@property (nullable, nonatomic, retain) NSNumber* _id;

@property (nullable, nonatomic, retain) NSString* username;

@property (nullable, nonatomic, retain) NSString* firstName;

@property (nullable, nonatomic, retain) NSString* lastName;

@property (nullable, nonatomic, retain) NSString* email;

@property (nullable, nonatomic, retain) NSString* password;

@property (nullable, nonatomic, retain) NSString* phone;
/* User Status [optional]
 */
@property (nullable, nonatomic, retain) NSNumber* userStatus;
@end

@interface SWGUserManagedObject (GeneratedAccessors)

@end


NS_ASSUME_NONNULL_END
