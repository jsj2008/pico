// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Identifies payment methods used by a buyer to pay a
 seller. On item listings, identifies one of the payment methods
 seller will accept for the item. Available payment methods can
 differ by site and item. Payment methods are not applicable to eBay
 Real Estate ad format listings.
 
 
 @ingroup ShoppingInterface
*/

/**
 
 No payment method specified.
 For example, no payment methods would be specified for Ad format listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_NONE;

/**
 
 Money order/cashiers check.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_MOCC;

/**
 
 American Express.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_AM_EX;

/**
 
 Payment instructions are contained in the item's description.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PAYMENT_SEE_DESCRIPTION;

/**
 
 Credit card.
 Not applicable to Real Estate or US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_CC_ACCEPTED;

/**
 
 Personal check.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PERSONAL_CHECK;

/**
 
 Cash on delivery.
 Only applicable to the following eBay sites: AT (16), BEFR (24),
 BENL (123), CH (193), DE (77), ES (186), FR (71), HK (201), IN (203),
 IT (101), PL (212), and SG (216).
 Not applicable to Real Estate listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_COD;

/**
 
 Visa/Mastercard. These qualify as safe payment methods.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_VISA_MC;

/**
 
 PaisaPay (for India site only). This qualifies as a safe payment method.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PAISA_PAY_ACCEPTED;

/**
 
 Other forms of payment.
 Not applicable to US/CA eBay Motors listings
 (see PaymentSeeDescription instead).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_OTHER;

/**
 
 PayPal is accepted as a payment method. This qualifies as a safe payment method. <br>
 <br>
 If PayPal is specified for US/CA eBay Motors vehicles, it is for
 the vehicle deposit (not for purchasing the vehicle).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PAY_PAL;

/**
 
 Discover card.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_DISCOVER;

/**
 
 This payment method is equivalent to the PayOnPickup payment method.
 CashOnPickup applies even for listings on the eBay US site that refer to "Pay on pickup."
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_CASH_ON_PICKUP;

/**
 
 Direct transfer of money.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_MONEY_XFER_ACCEPTED;

/**
 
 If the seller has bank account information on file, and
 MoneyXferAcceptedInCheckout = true, then the bank account
 information will be displayed in Checkout.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_MONEY_XFER_ACCEPTED_IN_CHECKOUT;

/**
 
 All other online payments.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_OTHER_ONLINE_PAYMENTS;

extern NSString *const Shopping_BuyerPaymentMethodCodeType_ESCROW;

extern NSString *const Shopping_BuyerPaymentMethodCodeType_PRE_PAY_DELIVERY;

extern NSString *const Shopping_BuyerPaymentMethodCodeType_COD_PRE_PAY_DELIVERY;

extern NSString *const Shopping_BuyerPaymentMethodCodeType_POSTAL_TRANSFER;

/**
 
 Placeholder value. See
 <a href="types/simpleTypes.html#token">token</a>.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_CUSTOM_CODE;

/**
 
 Loan check option (applicable only to the US eBay Motors site,
 except in the Parts and Accessories category, and the eBay Canada site for motors).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_LOAN_CHECK;

/**
 
 Cash-in-person option. Applicable only to US and Canada eBay Motors vehicles,
 (not the Parts and Accessories category).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_CASH_IN_PERSON;

/**
 
 Elektronisches Lastschriftverfahren (direct debit).
 Only applicable to Express Germany.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_ELV;

/**
 
 PaisaPayEscrow EMI (Equal Monthly Installment) payment method. 
 The PaisaPayEscrowEMI payment method is only for the India site (site ID 203).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PAISA_PAY_ESCROW_EMI;

/**
 
 The Moneybookers payment method. 
 For more information, see http://www.moneybookers.com/partners/us/ebay. 
 Only applicable to the US site (and 
 to the Parts and Accessories category of the US eBay Motors site).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_MONEYBOOKERS;

/**
 
 The Paymate payment method. For more information, 
 see http://www.paymate.com/eBay. 
 Only applicable to the US site (and 
 to the Parts and Accessories category of the US eBay Motors site).
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PAYMATE;

/**
 
 The ProPay payment method. US site only. For more information, 
 see http://www.Propay.com/eBay.
 
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_PRO_PAY;

/**
 
 For all payment intermediated transactions, If the authenticated caller is a seller then Standard Payment Method is returned to as Payment Method Used to sellers.
 OrderArray.Order.CheckoutStatus.PaymentMethod (GetOrders, GetOrderTransaction) and OrderArray.Order
 .TransactionArray.Transaction.Status (For all the 4 APIs).
     The COD (Cash on Demand) or POP (Pay on Pickup) should be shown as is to the buyers and sellers, these payment methods are not intermediated.
   
*/
extern NSString *const Shopping_BuyerPaymentMethodCodeType_STANDARD_PAYMENT;
