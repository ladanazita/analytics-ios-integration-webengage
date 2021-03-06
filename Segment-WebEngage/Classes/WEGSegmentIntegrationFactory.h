//
//  WEGSegmentIntegrationFactory.h
//  WebEngage
//
//  Created by Arpit on 25/10/16.
//  Copyright © 2016 Saumitra R. Bhave. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegrationFactory.h>
#import "WEGSegmentIntegration.h"

@interface WEGSegmentIntegrationFactory : NSObject<SEGIntegrationFactory>

+(instancetype) instanceWithApplication:(UIApplication*) application
                          launchOptions:(NSDictionary*) launchOptions;

+(instancetype) instanceWithApplication:(UIApplication*) application
                          launchOptions:(NSDictionary*) launchOptions
                       autoAPNSRegister:(BOOL) autoRegister;

+(instancetype) instanceWithApplication:(UIApplication*) application
                          launchOptions:(NSDictionary*) launchOptions
                   notificationDelegate:(id<WEGInAppNotificationProtocol>) notificationDelegate;

+(instancetype) instanceWithApplication:(UIApplication*) application
                          launchOptions:(NSDictionary*) launchOptions
                   notificationDelegate:(id<WEGInAppNotificationProtocol>) notificationDelegate
                       autoAPNSRegister:(BOOL) autoRegister;



@end
