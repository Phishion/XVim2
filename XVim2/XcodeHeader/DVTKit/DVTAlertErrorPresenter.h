//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTErrorPresenter.h>

@interface DVTAlertErrorPresenter : DVTErrorPresenter
{
}

- (void)presentError:(id)arg1 inContext:(id)arg2 allowNestedContext:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)presentError:(id)arg1 inContext:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentAlertForError:(id)arg1 inContext:(id)arg2 allowNestedContext:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_displayAlert:(id)arg1 inWindow:(id)arg2 modal:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end

