//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate>
{
    CNContact *_createdContact;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) CNContact *createdContact; // @synthesize createdContact=_createdContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

