// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class ArrayOfForecast;

/**
 (public class)
 
 @ingroup WeatherSoap
*/
@interface ForecastReturn : NSObject <PicoBindable> {

@private
    NSNumber *_success;
    NSString *_responseText;
    NSString *_state;
    NSString *_city;
    NSString *_weatherStationCity;
    ArrayOfForecast *_forecastResult;

}


/**
 (public property)
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *success;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *responseText;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *state;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *city;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *weatherStationCity;

/**
 (public property)
 
 type : class ArrayOfForecast
*/
@property (nonatomic, retain) ArrayOfForecast *forecastResult;


@end
