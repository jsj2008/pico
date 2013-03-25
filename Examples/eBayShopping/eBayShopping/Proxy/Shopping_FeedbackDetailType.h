// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_AmountType;

/**
 
 Detailed feedback information for a user. Conveys the score for the
 feedback, the textual comment, and other information.
   
 
 @ingroup ShoppingInterface
*/
@interface Shopping_FeedbackDetailType : NSObject <PicoBindable> {

@private
    NSString *_commentingUser;
    NSNumber *_commentingUserScore;
    NSString *_commentText;
    NSDate *_commentTime;
    NSString *_commentType;
    NSString *_feedbackResponse;
    NSString *_followUp;
    NSString *_itemID;
    NSString *_role;
    NSString *_itemTitle;
    Shopping_AmountType *_itemPrice;
    NSString *_feedbackID;
    NSString *_transactionID;
    NSNumber *_commentReplaced;
    NSNumber *_responseReplaced;
    NSNumber *_followUpReplaced;
    NSNumber *_countable;
    NSMutableArray *_any;

}


/**
 
 eBay user ID for the user who left the feedback.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *commentingUser;

/**
 
 Feedback score of the user in CommentingUser.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *commentingUserScore;

/**
 
 Text message left by the user in CommentingUser. Used to provide a more
 in-depth description of the user's opinion of the transaction.
 Returned as text in the language that the
 comment was originally left in.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *commentText;

/**
 
 Date and time (in GMT) that the feedback was submitted to eBay.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *commentTime;

/**
 
 Type of feedback. Can be Positive, Neutral, Negative, or Withdrawn (see the
 CommentTypeCodeType code list). Positive feedbacks add to the user's total
 feedback score, negative feedbacks lower the score, and neutral feedbacks do
 not affect the score (but do affect the overall picture of the user's online
 reputation).
 
 
 type: string constant in Shopping_CommentTypeCodeType.h
*/
@property (nonatomic, retain) NSString *commentType;

/**
 
 Textual comment that the user targeted by feedback may leave
 in response or rebuttal to the feedback.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *feedbackResponse;

/**
 
 Explanation a user can give to a response.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *followUp;

/**
 
 The ID that uniquely identifies the item listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Indicates whether the user who was the feedback recipient was a Buyer or the
 Seller for that transaction.
 
 
 type: string constant in Shopping_TradingRoleCodeType.h
*/
@property (nonatomic, retain) NSString *role;

/**
 
 Name of the listing for which feedback was provided.
 Returned as CDATA.
 Not returned if a listing ended more than 90 days ago.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemTitle;

/**
 
 The final price for the item, associated with
 the currency identified by the currencyId attribute of the AmountType.
 Not returned if a listing ended more than 90 days ago.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *itemPrice;

/**
 
 Unique identifier for the feedback entry.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *feedbackID;

/**
 
 Unique identifier for the transaction about which
 this feedback entry was left.
 This field is not returned in the case of TransactionIDs from Chinese auction listings,
 because a value of zero is used for TransactionIDs in such cases.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 Indicates whether eBay replaced the comment with a message
 that the comment was removed.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *commentReplaced;

/**
 
 Indicates whether eBay replaced the response with a message
 that the response was removed.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *responseReplaced;

/**
 
 Indicates whether eBay replaced the follow-up with a message
 that the follow-up was removed.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *followUpReplaced;

/**
 
 Specifies if a user's feedback score is or is not countable. This field is
 returned only when a user's feedback score is not countable (value is false).
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *countable;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
