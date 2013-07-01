/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"


@interface Member : NSObject <NSCoding> {
  int64_t __memberId;
  NSString * __name;
  NSString * __birthday;
  NSString * __idCard;
  NSString * __memberCard;
  NSString * __phone;
  BOOL __phoneVerified;
  NSString * __email;
  NSString * __level;
  BOOL __isMale;
  int32_t __memberType;
  BOOL __isPayTrain;

  BOOL __memberId_isset;
  BOOL __name_isset;
  BOOL __birthday_isset;
  BOOL __idCard_isset;
  BOOL __memberCard_isset;
  BOOL __phone_isset;
  BOOL __phoneVerified_isset;
  BOOL __email_isset;
  BOOL __level_isset;
  BOOL __isMale_isset;
  BOOL __memberType_isset;
  BOOL __isPayTrain_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=memberId, setter=setMemberId:) int64_t memberId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=birthday, setter=setBirthday:) NSString * birthday;
@property (nonatomic, retain, getter=idCard, setter=setIdCard:) NSString * idCard;
@property (nonatomic, retain, getter=memberCard, setter=setMemberCard:) NSString * memberCard;
@property (nonatomic, retain, getter=phone, setter=setPhone:) NSString * phone;
@property (nonatomic, getter=phoneVerified, setter=setPhoneVerified:) BOOL phoneVerified;
@property (nonatomic, retain, getter=email, setter=setEmail:) NSString * email;
@property (nonatomic, retain, getter=level, setter=setLevel:) NSString * level;
@property (nonatomic, getter=isMale, setter=setIsMale:) BOOL isMale;
@property (nonatomic, getter=memberType, setter=setMemberType:) int32_t memberType;
@property (nonatomic, getter=isPayTrain, setter=setIsPayTrain:) BOOL isPayTrain;
#endif

- (id) init;
- (id) initWithMemberId: (int64_t) memberId name: (NSString *) name birthday: (NSString *) birthday idCard: (NSString *) idCard memberCard: (NSString *) memberCard phone: (NSString *) phone phoneVerified: (BOOL) phoneVerified email: (NSString *) email level: (NSString *) level isMale: (BOOL) isMale memberType: (int32_t) memberType isPayTrain: (BOOL) isPayTrain;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int64_t) memberId;
- (void) setMemberId: (int64_t) memberId;
#endif
- (BOOL) memberIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) birthday;
- (void) setBirthday: (NSString *) birthday;
#endif
- (BOOL) birthdayIsSet;

#if !__has_feature(objc_arc)
- (NSString *) idCard;
- (void) setIdCard: (NSString *) idCard;
#endif
- (BOOL) idCardIsSet;

#if !__has_feature(objc_arc)
- (NSString *) memberCard;
- (void) setMemberCard: (NSString *) memberCard;
#endif
- (BOOL) memberCardIsSet;

#if !__has_feature(objc_arc)
- (NSString *) phone;
- (void) setPhone: (NSString *) phone;
#endif
- (BOOL) phoneIsSet;

#if !__has_feature(objc_arc)
- (BOOL) phoneVerified;
- (void) setPhoneVerified: (BOOL) phoneVerified;
#endif
- (BOOL) phoneVerifiedIsSet;

#if !__has_feature(objc_arc)
- (NSString *) email;
- (void) setEmail: (NSString *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (NSString *) level;
- (void) setLevel: (NSString *) level;
#endif
- (BOOL) levelIsSet;

#if !__has_feature(objc_arc)
- (BOOL) isMale;
- (void) setIsMale: (BOOL) isMale;
#endif
- (BOOL) isMaleIsSet;

#if !__has_feature(objc_arc)
- (int32_t) memberType;
- (void) setMemberType: (int32_t) memberType;
#endif
- (BOOL) memberTypeIsSet;

#if !__has_feature(objc_arc)
- (BOOL) isPayTrain;
- (void) setIsPayTrain: (BOOL) isPayTrain;
#endif
- (BOOL) isPayTrainIsSet;

@end

@interface Voucher : NSObject <NSCoding> {
  int64_t __voucherId;
  double __value;
  int64_t __startTime;
  int64_t __endTime;
  NSString * __notice;

  BOOL __voucherId_isset;
  BOOL __value_isset;
  BOOL __startTime_isset;
  BOOL __endTime_isset;
  BOOL __notice_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=voucherId, setter=setVoucherId:) int64_t voucherId;
@property (nonatomic, getter=value, setter=setValue:) double value;
@property (nonatomic, getter=startTime, setter=setStartTime:) int64_t startTime;
@property (nonatomic, getter=endTime, setter=setEndTime:) int64_t endTime;
@property (nonatomic, retain, getter=notice, setter=setNotice:) NSString * notice;
#endif

- (id) init;
- (id) initWithVoucherId: (int64_t) voucherId value: (double) value startTime: (int64_t) startTime endTime: (int64_t) endTime notice: (NSString *) notice;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int64_t) voucherId;
- (void) setVoucherId: (int64_t) voucherId;
#endif
- (BOOL) voucherIdIsSet;

#if !__has_feature(objc_arc)
- (double) value;
- (void) setValue: (double) value;
#endif
- (BOOL) valueIsSet;

#if !__has_feature(objc_arc)
- (int64_t) startTime;
- (void) setStartTime: (int64_t) startTime;
#endif
- (BOOL) startTimeIsSet;

#if !__has_feature(objc_arc)
- (int64_t) endTime;
- (void) setEndTime: (int64_t) endTime;
#endif
- (BOOL) endTimeIsSet;

#if !__has_feature(objc_arc)
- (NSString *) notice;
- (void) setNotice: (NSString *) notice;
#endif
- (BOOL) noticeIsSet;

@end

@interface RefundCoupon : NSObject <NSCoding> {
  int64_t __refundCouponId;
  double __value;
  int64_t __startTime;
  int64_t __endTime;
  NSString * __notice;

  BOOL __refundCouponId_isset;
  BOOL __value_isset;
  BOOL __startTime_isset;
  BOOL __endTime_isset;
  BOOL __notice_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=refundCouponId, setter=setRefundCouponId:) int64_t refundCouponId;
@property (nonatomic, getter=value, setter=setValue:) double value;
@property (nonatomic, getter=startTime, setter=setStartTime:) int64_t startTime;
@property (nonatomic, getter=endTime, setter=setEndTime:) int64_t endTime;
@property (nonatomic, retain, getter=notice, setter=setNotice:) NSString * notice;
#endif

- (id) init;
- (id) initWithRefundCouponId: (int64_t) refundCouponId value: (double) value startTime: (int64_t) startTime endTime: (int64_t) endTime notice: (NSString *) notice;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int64_t) refundCouponId;
- (void) setRefundCouponId: (int64_t) refundCouponId;
#endif
- (BOOL) refundCouponIdIsSet;

#if !__has_feature(objc_arc)
- (double) value;
- (void) setValue: (double) value;
#endif
- (BOOL) valueIsSet;

#if !__has_feature(objc_arc)
- (int64_t) startTime;
- (void) setStartTime: (int64_t) startTime;
#endif
- (BOOL) startTimeIsSet;

#if !__has_feature(objc_arc)
- (int64_t) endTime;
- (void) setEndTime: (int64_t) endTime;
#endif
- (BOOL) endTimeIsSet;

#if !__has_feature(objc_arc)
- (NSString *) notice;
- (void) setNotice: (NSString *) notice;
#endif
- (BOOL) noticeIsSet;

@end

@interface Asset : NSObject <NSCoding> {
  int32_t __point;
  int32_t __voucherAmount;
  int32_t __voucherValue;
  NSMutableArray * __voucher;
  int32_t __refundCouponAmount;
  int32_t __refundCouponValue;
  NSMutableArray * __refundCoupon;
  double __storedValue;
  int32_t __totalTreasure;

  BOOL __point_isset;
  BOOL __voucherAmount_isset;
  BOOL __voucherValue_isset;
  BOOL __voucher_isset;
  BOOL __refundCouponAmount_isset;
  BOOL __refundCouponValue_isset;
  BOOL __refundCoupon_isset;
  BOOL __storedValue_isset;
  BOOL __totalTreasure_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=point, setter=setPoint:) int32_t point;
@property (nonatomic, getter=voucherAmount, setter=setVoucherAmount:) int32_t voucherAmount;
@property (nonatomic, getter=voucherValue, setter=setVoucherValue:) int32_t voucherValue;
@property (nonatomic, retain, getter=voucher, setter=setVoucher:) NSMutableArray * voucher;
@property (nonatomic, getter=refundCouponAmount, setter=setRefundCouponAmount:) int32_t refundCouponAmount;
@property (nonatomic, getter=refundCouponValue, setter=setRefundCouponValue:) int32_t refundCouponValue;
@property (nonatomic, retain, getter=refundCoupon, setter=setRefundCoupon:) NSMutableArray * refundCoupon;
@property (nonatomic, getter=storedValue, setter=setStoredValue:) double storedValue;
@property (nonatomic, getter=totalTreasure, setter=setTotalTreasure:) int32_t totalTreasure;
#endif

- (id) init;
- (id) initWithPoint: (int32_t) point voucherAmount: (int32_t) voucherAmount voucherValue: (int32_t) voucherValue voucher: (NSMutableArray *) voucher refundCouponAmount: (int32_t) refundCouponAmount refundCouponValue: (int32_t) refundCouponValue refundCoupon: (NSMutableArray *) refundCoupon storedValue: (double) storedValue totalTreasure: (int32_t) totalTreasure;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) point;
- (void) setPoint: (int32_t) point;
#endif
- (BOOL) pointIsSet;

#if !__has_feature(objc_arc)
- (int32_t) voucherAmount;
- (void) setVoucherAmount: (int32_t) voucherAmount;
#endif
- (BOOL) voucherAmountIsSet;

#if !__has_feature(objc_arc)
- (int32_t) voucherValue;
- (void) setVoucherValue: (int32_t) voucherValue;
#endif
- (BOOL) voucherValueIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) voucher;
- (void) setVoucher: (NSMutableArray *) voucher;
#endif
- (BOOL) voucherIsSet;

#if !__has_feature(objc_arc)
- (int32_t) refundCouponAmount;
- (void) setRefundCouponAmount: (int32_t) refundCouponAmount;
#endif
- (BOOL) refundCouponAmountIsSet;

#if !__has_feature(objc_arc)
- (int32_t) refundCouponValue;
- (void) setRefundCouponValue: (int32_t) refundCouponValue;
#endif
- (BOOL) refundCouponValueIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) refundCoupon;
- (void) setRefundCoupon: (NSMutableArray *) refundCoupon;
#endif
- (BOOL) refundCouponIsSet;

#if !__has_feature(objc_arc)
- (double) storedValue;
- (void) setStoredValue: (double) storedValue;
#endif
- (BOOL) storedValueIsSet;

#if !__has_feature(objc_arc)
- (int32_t) totalTreasure;
- (void) setTotalTreasure: (int32_t) totalTreasure;
#endif
- (BOOL) totalTreasureIsSet;

@end

@interface Signture : NSObject <NSCoding> {
  NSString * __username;
  NSString * __password;

  BOOL __username_isset;
  BOOL __password_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=username, setter=setUsername:) NSString * username;
@property (nonatomic, retain, getter=password, setter=setPassword:) NSString * password;
#endif

- (id) init;
- (id) initWithUsername: (NSString *) username password: (NSString *) password;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (NSString *) username;
- (void) setUsername: (NSString *) username;
#endif
- (BOOL) usernameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) password;
- (void) setPassword: (NSString *) password;
#endif
- (BOOL) passwordIsSet;

@end

@interface Credential : NSObject <NSCoding> {
  NSString * __token;
  Member * __member;

  BOOL __token_isset;
  BOOL __member_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
@property (nonatomic, retain, getter=member, setter=setMember:) Member * member;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token member: (Member *) member;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (Member *) member;
- (void) setMember: (Member *) member;
#endif
- (BOOL) memberIsSet;

@end

@interface MemberInfoRequest : NSObject <NSCoding> {
  int64_t __memberId;
  int32_t __pageIndex;
  int32_t __pageSize;

  BOOL __memberId_isset;
  BOOL __pageIndex_isset;
  BOOL __pageSize_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=memberId, setter=setMemberId:) int64_t memberId;
@property (nonatomic, getter=pageIndex, setter=setPageIndex:) int32_t pageIndex;
@property (nonatomic, getter=pageSize, setter=setPageSize:) int32_t pageSize;
#endif

- (id) init;
- (id) initWithMemberId: (int64_t) memberId pageIndex: (int32_t) pageIndex pageSize: (int32_t) pageSize;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int64_t) memberId;
- (void) setMemberId: (int64_t) memberId;
#endif
- (BOOL) memberIdIsSet;

#if !__has_feature(objc_arc)
- (int32_t) pageIndex;
- (void) setPageIndex: (int32_t) pageIndex;
#endif
- (BOOL) pageIndexIsSet;

#if !__has_feature(objc_arc)
- (int32_t) pageSize;
- (void) setPageSize: (int32_t) pageSize;
#endif
- (BOOL) pageSizeIsSet;

@end

@interface TMemberConstants : NSObject {
}
@end