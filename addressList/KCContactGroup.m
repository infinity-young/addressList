//
//  KCContactGroup.m
//  addressList2
//
//  Created by 杨莎莎 on 2021/6/29.
//

#import "KCContactGroup.h"

@implementation KCContactGroup
-(KCContactGroup *)initWithName:(NSString *)name andDetail:(NSString *)detail andContacts:(NSMutableArray *)contacts{
    if (self=[super init]) {
        self.name=name;
        self.detail=detail;
        self.contacts=contacts;
    }
    return self;
}

+(KCContactGroup *)initWithName:(NSString *)name andDetail:(NSString *)detail andContacts:(NSMutableArray *)contacts{
    KCContactGroup *group1=[[KCContactGroup alloc]initWithName:name andDetail:detail andContacts:contacts];
    return group1;
}

@end
