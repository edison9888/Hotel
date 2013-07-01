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


@interface Region : NSObject <NSCoding> {
  int32_t __regionId;
  NSString * __name;
  NSString * __pinyin;

  BOOL __regionId_isset;
  BOOL __name_isset;
  BOOL __pinyin_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=regionId, setter=setRegionId:) int32_t regionId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=pinyin, setter=setPinyin:) NSString * pinyin;
#endif

- (id) init;
- (id) initWithRegionId: (int32_t) regionId name: (NSString *) name pinyin: (NSString *) pinyin;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) regionId;
- (void) setRegionId: (int32_t) regionId;
#endif
- (BOOL) regionIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) pinyin;
- (void) setPinyin: (NSString *) pinyin;
#endif
- (BOOL) pinyinIsSet;

@end

@interface City : NSObject <NSCoding> {
  int32_t __cityId;
  NSString * __name;
  NSString * __pinyin;
  NSMutableArray * __region;

  BOOL __cityId_isset;
  BOOL __name_isset;
  BOOL __pinyin_isset;
  BOOL __region_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=cityId, setter=setCityId:) int32_t cityId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=pinyin, setter=setPinyin:) NSString * pinyin;
@property (nonatomic, retain, getter=region, setter=setRegion:) NSMutableArray * region;
#endif

- (id) init;
- (id) initWithCityId: (int32_t) cityId name: (NSString *) name pinyin: (NSString *) pinyin region: (NSMutableArray *) region;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) cityId;
- (void) setCityId: (int32_t) cityId;
#endif
- (BOOL) cityIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) pinyin;
- (void) setPinyin: (NSString *) pinyin;
#endif
- (BOOL) pinyinIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) region;
- (void) setRegion: (NSMutableArray *) region;
#endif
- (BOOL) regionIsSet;

@end

@interface Image : NSObject <NSCoding> {
  NSString * __url;

  BOOL __url_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=url, setter=setUrl:) NSString * url;
#endif

- (id) init;
- (id) initWithUrl: (NSString *) url;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (NSString *) url;
- (void) setUrl: (NSString *) url;
#endif
- (BOOL) urlIsSet;

@end

@interface Room : NSObject <NSCoding> {
  int32_t __rooomId;
  NSString * __name;
  double __price;
  BOOL __vacant;

  BOOL __rooomId_isset;
  BOOL __name_isset;
  BOOL __price_isset;
  BOOL __vacant_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=rooomId, setter=setRooomId:) int32_t rooomId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, getter=price, setter=setPrice:) double price;
@property (nonatomic, getter=vacant, setter=setVacant:) BOOL vacant;
#endif

- (id) init;
- (id) initWithRooomId: (int32_t) rooomId name: (NSString *) name price: (double) price vacant: (BOOL) vacant;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) rooomId;
- (void) setRooomId: (int32_t) rooomId;
#endif
- (BOOL) rooomIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (double) price;
- (void) setPrice: (double) price;
#endif
- (BOOL) priceIsSet;

#if !__has_feature(objc_arc)
- (BOOL) vacant;
- (void) setVacant: (BOOL) vacant;
#endif
- (BOOL) vacantIsSet;

@end

@interface Supply : NSObject <NSCoding> {
  int32_t __supplyId;
  NSString * __name;
  NSString * __quantifier;
  int32_t __onlinePrice;
  int32_t __price;

  BOOL __supplyId_isset;
  BOOL __name_isset;
  BOOL __quantifier_isset;
  BOOL __onlinePrice_isset;
  BOOL __price_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=supplyId, setter=setSupplyId:) int32_t supplyId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=quantifier, setter=setQuantifier:) NSString * quantifier;
@property (nonatomic, getter=onlinePrice, setter=setOnlinePrice:) int32_t onlinePrice;
@property (nonatomic, getter=price, setter=setPrice:) int32_t price;
#endif

- (id) init;
- (id) initWithSupplyId: (int32_t) supplyId name: (NSString *) name quantifier: (NSString *) quantifier onlinePrice: (int32_t) onlinePrice price: (int32_t) price;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) supplyId;
- (void) setSupplyId: (int32_t) supplyId;
#endif
- (BOOL) supplyIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) quantifier;
- (void) setQuantifier: (NSString *) quantifier;
#endif
- (BOOL) quantifierIsSet;

#if !__has_feature(objc_arc)
- (int32_t) onlinePrice;
- (void) setOnlinePrice: (int32_t) onlinePrice;
#endif
- (BOOL) onlinePriceIsSet;

#if !__has_feature(objc_arc)
- (int32_t) price;
- (void) setPrice: (int32_t) price;
#endif
- (BOOL) priceIsSet;

@end

@interface Hotel : NSObject <NSCoding> {
  int32_t __hotelId;
  NSString * __name;
  NSString * __phone;
  NSString * __address;
  double __latitude;
  double __longitude;
  BOOL __vacant;
  double __price;
  Image * __coverImage;
  NSMutableArray * __image;
  NSString * __introduction;
  NSMutableArray * __rooms;
  NSMutableArray * __supplies;

  BOOL __hotelId_isset;
  BOOL __name_isset;
  BOOL __phone_isset;
  BOOL __address_isset;
  BOOL __latitude_isset;
  BOOL __longitude_isset;
  BOOL __vacant_isset;
  BOOL __price_isset;
  BOOL __coverImage_isset;
  BOOL __image_isset;
  BOOL __introduction_isset;
  BOOL __rooms_isset;
  BOOL __supplies_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=hotelId, setter=setHotelId:) int32_t hotelId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=phone, setter=setPhone:) NSString * phone;
@property (nonatomic, retain, getter=address, setter=setAddress:) NSString * address;
@property (nonatomic, getter=latitude, setter=setLatitude:) double latitude;
@property (nonatomic, getter=longitude, setter=setLongitude:) double longitude;
@property (nonatomic, getter=vacant, setter=setVacant:) BOOL vacant;
@property (nonatomic, getter=price, setter=setPrice:) double price;
@property (nonatomic, retain, getter=coverImage, setter=setCoverImage:) Image * coverImage;
@property (nonatomic, retain, getter=image, setter=setImage:) NSMutableArray * image;
@property (nonatomic, retain, getter=introduction, setter=setIntroduction:) NSString * introduction;
@property (nonatomic, retain, getter=rooms, setter=setRooms:) NSMutableArray * rooms;
@property (nonatomic, retain, getter=supplies, setter=setSupplies:) NSMutableArray * supplies;
#endif

- (id) init;
- (id) initWithHotelId: (int32_t) hotelId name: (NSString *) name phone: (NSString *) phone address: (NSString *) address latitude: (double) latitude longitude: (double) longitude vacant: (BOOL) vacant price: (double) price coverImage: (Image *) coverImage image: (NSMutableArray *) image introduction: (NSString *) introduction rooms: (NSMutableArray *) rooms supplies: (NSMutableArray *) supplies;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) hotelId;
- (void) setHotelId: (int32_t) hotelId;
#endif
- (BOOL) hotelIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) phone;
- (void) setPhone: (NSString *) phone;
#endif
- (BOOL) phoneIsSet;

#if !__has_feature(objc_arc)
- (NSString *) address;
- (void) setAddress: (NSString *) address;
#endif
- (BOOL) addressIsSet;

#if !__has_feature(objc_arc)
- (double) latitude;
- (void) setLatitude: (double) latitude;
#endif
- (BOOL) latitudeIsSet;

#if !__has_feature(objc_arc)
- (double) longitude;
- (void) setLongitude: (double) longitude;
#endif
- (BOOL) longitudeIsSet;

#if !__has_feature(objc_arc)
- (BOOL) vacant;
- (void) setVacant: (BOOL) vacant;
#endif
- (BOOL) vacantIsSet;

#if !__has_feature(objc_arc)
- (double) price;
- (void) setPrice: (double) price;
#endif
- (BOOL) priceIsSet;

#if !__has_feature(objc_arc)
- (Image *) coverImage;
- (void) setCoverImage: (Image *) coverImage;
#endif
- (BOOL) coverImageIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) image;
- (void) setImage: (NSMutableArray *) image;
#endif
- (BOOL) imageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) introduction;
- (void) setIntroduction: (NSString *) introduction;
#endif
- (BOOL) introductionIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) rooms;
- (void) setRooms: (NSMutableArray *) rooms;
#endif
- (BOOL) roomsIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) supplies;
- (void) setSupplies: (NSMutableArray *) supplies;
#endif
- (BOOL) suppliesIsSet;

@end

@interface SearchRequest : NSObject <NSCoding> {
  int32_t __cityId;
  int32_t __regionId;
  NSString * __keyword;
  int64_t __checkinTime;
  int64_t __checkoutTime;
  double __latitude;
  double __longitude;
  double __radius;
  int32_t __pageIndex;
  int32_t __pageSize;
  int32_t __sortBy;

  BOOL __cityId_isset;
  BOOL __regionId_isset;
  BOOL __keyword_isset;
  BOOL __checkinTime_isset;
  BOOL __checkoutTime_isset;
  BOOL __latitude_isset;
  BOOL __longitude_isset;
  BOOL __radius_isset;
  BOOL __pageIndex_isset;
  BOOL __pageSize_isset;
  BOOL __sortBy_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=cityId, setter=setCityId:) int32_t cityId;
@property (nonatomic, getter=regionId, setter=setRegionId:) int32_t regionId;
@property (nonatomic, retain, getter=keyword, setter=setKeyword:) NSString * keyword;
@property (nonatomic, getter=checkinTime, setter=setCheckinTime:) int64_t checkinTime;
@property (nonatomic, getter=checkoutTime, setter=setCheckoutTime:) int64_t checkoutTime;
@property (nonatomic, getter=latitude, setter=setLatitude:) double latitude;
@property (nonatomic, getter=longitude, setter=setLongitude:) double longitude;
@property (nonatomic, getter=radius, setter=setRadius:) double radius;
@property (nonatomic, getter=pageIndex, setter=setPageIndex:) int32_t pageIndex;
@property (nonatomic, getter=pageSize, setter=setPageSize:) int32_t pageSize;
@property (nonatomic, getter=sortBy, setter=setSortBy:) int32_t sortBy;
#endif

- (id) init;
- (id) initWithCityId: (int32_t) cityId regionId: (int32_t) regionId keyword: (NSString *) keyword checkinTime: (int64_t) checkinTime checkoutTime: (int64_t) checkoutTime latitude: (double) latitude longitude: (double) longitude radius: (double) radius pageIndex: (int32_t) pageIndex pageSize: (int32_t) pageSize sortBy: (int32_t) sortBy;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) cityId;
- (void) setCityId: (int32_t) cityId;
#endif
- (BOOL) cityIdIsSet;

#if !__has_feature(objc_arc)
- (int32_t) regionId;
- (void) setRegionId: (int32_t) regionId;
#endif
- (BOOL) regionIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) keyword;
- (void) setKeyword: (NSString *) keyword;
#endif
- (BOOL) keywordIsSet;

#if !__has_feature(objc_arc)
- (int64_t) checkinTime;
- (void) setCheckinTime: (int64_t) checkinTime;
#endif
- (BOOL) checkinTimeIsSet;

#if !__has_feature(objc_arc)
- (int64_t) checkoutTime;
- (void) setCheckoutTime: (int64_t) checkoutTime;
#endif
- (BOOL) checkoutTimeIsSet;

#if !__has_feature(objc_arc)
- (double) latitude;
- (void) setLatitude: (double) latitude;
#endif
- (BOOL) latitudeIsSet;

#if !__has_feature(objc_arc)
- (double) longitude;
- (void) setLongitude: (double) longitude;
#endif
- (BOOL) longitudeIsSet;

#if !__has_feature(objc_arc)
- (double) radius;
- (void) setRadius: (double) radius;
#endif
- (BOOL) radiusIsSet;

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

#if !__has_feature(objc_arc)
- (int32_t) sortBy;
- (void) setSortBy: (int32_t) sortBy;
#endif
- (BOOL) sortByIsSet;

@end

@interface HotelRequest : NSObject <NSCoding> {
  int32_t __hotelId;
  int64_t __checkinTime;
  int64_t __checkoutTime;

  BOOL __hotelId_isset;
  BOOL __checkinTime_isset;
  BOOL __checkoutTime_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=hotelId, setter=setHotelId:) int32_t hotelId;
@property (nonatomic, getter=checkinTime, setter=setCheckinTime:) int64_t checkinTime;
@property (nonatomic, getter=checkoutTime, setter=setCheckoutTime:) int64_t checkoutTime;
#endif

- (id) init;
- (id) initWithHotelId: (int32_t) hotelId checkinTime: (int64_t) checkinTime checkoutTime: (int64_t) checkoutTime;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

#if !__has_feature(objc_arc)
- (int32_t) hotelId;
- (void) setHotelId: (int32_t) hotelId;
#endif
- (BOOL) hotelIdIsSet;

#if !__has_feature(objc_arc)
- (int64_t) checkinTime;
- (void) setCheckinTime: (int64_t) checkinTime;
#endif
- (BOOL) checkinTimeIsSet;

#if !__has_feature(objc_arc)
- (int64_t) checkoutTime;
- (void) setCheckoutTime: (int64_t) checkoutTime;
#endif
- (BOOL) checkoutTimeIsSet;

@end

@interface THotelConstants : NSObject {
}
@end
