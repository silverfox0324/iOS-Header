//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController
{
    PSSpecifier *_switchWithRingerSpecifier;
    PSSpecifier *_alwaysSpecifier;
    PSSpecifier *_handsfreeSpecifier;
    PSSpecifier *_groupSpecifier;
    long long _useDeviceSpeakerForTTSPreference;
}

+ (id)bundle;
- (void).cxx_destruct;
- (id)_localizeTriggerString:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_refreshFooterForSpecifier:(id)arg1;
- (id)footerVariant;
- (void)_updateSpecifiersFromPreferences;
- (id)specifiers;
- (void)preferencesDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

