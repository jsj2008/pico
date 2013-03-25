// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Use aspect filters to refine the number of results returned in a response.
 Populate the aspectFilter container with aspect values obtained from the
 response of a query that returns an aspectHistogram.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_AspectFilter : NSObject <PicoBindable> {

@private
    NSString *_aspectName;
    NSMutableArray *_aspectValueName;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 Name of a standard item characteristic associated with a given domain.
 For example, "Optical Zoom" or "Megapixels" are aspects for the Digital
 Cameras domain. The current aspect names associated with a specific
 domain can be found in the aspect histogram. Aspect histograms can be
 retrieved for a given keyword query or category. The aspect histogram
 contains information about aspects from the domain that is most relevant
 to your search (or category).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *aspectName;

/**
 
 A value name for a given aspect. For example, "Point & Shoot" is a
 value name for the "Product Type" aspect in the "Digital Cameras" domain.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *aspectValueName;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
