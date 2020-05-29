//
//  ExchangeSDK.h
//  ExchangeSDK
//
//  Created by immotor on 2020/5/29.
//  Copyright © 2020 immotor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ReservationConstants.h"
typedef void (^HandleBlock)(ReservationStatu statu, NSDictionary * responseDic);
typedef void (^NetworkResponseSuccessBlock) (id response);
typedef void (^NetworkResponseFailureBlock) (NSError *error);

@interface ExchangeSDK : NSObject
@property (nonatomic, strong) NSString *userToken;//用户token
+ (instancetype)sharedBatteryStationSDK;
- (void)scanStationQRCodeFromServerWith:(NSString *)stationID orderCode:(NSString *)authCode reservedType:(SelectionType)type voltageType:(SelectBatteryType)voltageType batteryNumber:(int)number CompletedBlock:(HandleBlock)block;
@end
