//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIViewController;

@protocol NavigateLogicControllerDelegate <NSObject>

@optional
- (NSURL *)getStreetViewUrl;
- (void)onPushViewController:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onPresentViewControlelr:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
@end

