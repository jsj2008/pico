// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Finding_GetHistogramsResponse.h"
#import "Finding_AspectHistogramContainer.h"
#import "Finding_ExtensionType.h"
#import "Finding_ConditionHistogramContainer.h"
#import "Finding_CategoryHistogramContainer.h"

@implementation Finding_GetHistogramsResponse

@synthesize categoryHistogramContainer = _categoryHistogramContainer;
@synthesize aspectHistogramContainer = _aspectHistogramContainer;
@synthesize conditionHistogramContainer = _conditionHistogramContainer;
@synthesize extension = _extension;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"getHistogramsResponse" nsUri:@"http://www.ebay.com/marketplace/search/v1/services"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"categoryHistogramContainer" propertyName:@"categoryHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_CategoryHistogramContainer class]];
    [map setObject:ps forKey:@"categoryHistogramContainer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"aspectHistogramContainer" propertyName:@"aspectHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_AspectHistogramContainer class]];
    [map setObject:ps forKey:@"aspectHistogramContainer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"conditionHistogramContainer" propertyName:@"conditionHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_ConditionHistogramContainer class]];
    [map setObject:ps forKey:@"conditionHistogramContainer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"extension" propertyName:@"extension" type:PICO_TYPE_OBJECT clazz:[Finding_ExtensionType class]];
    [map setObject:ps forKey:@"extension"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryHistogramContainer = nil;
    self.aspectHistogramContainer = nil;
    self.conditionHistogramContainer = nil;
    self.extension = nil;
    [super dealloc];
}

@end
