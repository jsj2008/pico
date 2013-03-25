// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractResponseType.h"


@class Shopping_SimpleItemArrayType;

/**
 
 Popular items, detail level is default for simple item type. addition with WatchCount.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_FindPopularItemsResponseType : Shopping_AbstractResponseType {

@private
    Shopping_SimpleItemArrayType *_itemArray;

}


/**
 
 A list of active items that were listed with the requested product.
 
 
 type : class Shopping_SimpleItemArrayType
*/
@property (nonatomic, retain) Shopping_SimpleItemArrayType *itemArray;


@end
