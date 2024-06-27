//
//  KCContact.h
//  addressList2
//
//  Created by 杨莎莎 on 2021/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KCContact : NSObject
@property (nonatomic,copy) NSString *firstName;
@property (nonatomic,copy) NSString *lastName;
@property (nonatomic,copy) NSString *phoneNumber;

-(KCContact *)initWithFirstName:(NSString *)firstName andLastName:(NSString *)lastName andPhoneNumber:(NSString *)phoneNumber;

-(NSString *)getName;

+(KCContact *)initWithFirstName:(NSString *)firstName andLastName:(NSString *)lastName andPhoneNumber:(NSString *)phoneNumber;
@end

NS_ASSUME_NONNULL_END
