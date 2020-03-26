//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSAuthKitUpdateController-Protocol.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIAuthKitUpdatePromptController : NSObject <AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateController>
{
    UIViewController _presentingViewController;
}

+ (id)_createAuthenticationController;
+ (Class)_authKitAuthenticationContextClass;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
// - (void).cxx_destruct;
- (void)_handleAuthKitError:(id)arg1 options:(id)arg2;
- (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
- (id)performAuthKitUpdateForAccount:(id)arg1 options:(id)arg2;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)initWithPresentingViewController:(id)arg1;

@end
