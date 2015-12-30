#import <Preferences/Preferences.h>

@interface fortonprefsListController: PSListController {
}
@end

@implementation fortonprefsListController
- (id)specifiers {
    if(_specifiers == nil) {
        _specifiers = [[self loadSpecifiersFromPlistName:@"fortonprefs" target:self] retain];
    }
    return _specifiers;
}
@end
// vim:ft=objc
