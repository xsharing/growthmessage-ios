//
//  GMMessage.h
//  GrowthMessage
//
//  Created by Naoyuki Kataoka on 2015/03/02.
//  Copyright (c) 2015年 SIROK, Inc. All rights reserved.
//

#import "GBDomain.h"

@interface GMMessage : GBDomain <NSCoding> {
    
    NSString *id;
    NSDate *created;
    
}

@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSDate *created;

+ (instancetype)findWithClientId:(NSString *)clientId credentialId:(NSString *)credentialId;

@end