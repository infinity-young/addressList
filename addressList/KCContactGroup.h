//
//  KCContactGroup.h
//  addressList2
//
//  Created by 杨莎莎 on 2021/6/29.
//

#import <Foundation/Foundation.h>
#import "KCContact.h"


NS_ASSUME_NONNULL_BEGIN

@interface KCContactGroup : NSObject
@property (nonatomic,copy) NSString *name;

@property (nonatomic,copy) NSString *detail;

@property (nonatomic,strong) NSMutableArray *contacts;

-(KCContactGroup *)initWithName:(NSString *)name andDetail:(NSString *)detail andContacts:(NSMutableArray *)contacts;

+(KCContactGroup *)initWithName:(NSString *)name andDetail:(NSString *)detail andContacts:(NSMutableArray *)contacts;
@end

NS_ASSUME_NONNULL_END
