// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "CartClearRequest.h"

@implementation CartClearRequest

@synthesize cartId = _cartId;
@synthesize hmac = _hmac;
@synthesize mergeCart = _mergeCart;
@synthesize responseGroup = _responseGroup;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CartId" propertyName:@"cartId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"cartId"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"HMAC" propertyName:@"hmac" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"hmac"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MergeCart" propertyName:@"mergeCart" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"mergeCart"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ResponseGroup" propertyName:@"responseGroup" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"responseGroup"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.cartId = nil;
    self.hmac = nil;
    self.mergeCart = nil;
    self.responseGroup = nil;
    [super dealloc];
}

@end
