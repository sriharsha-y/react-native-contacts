#import <React/RCTEventEmitter.h>
#import <Contacts/Contacts.h>
#import <ContactsUI/ContactsUI.h>
#ifdef RCT_NEW_ARCH_ENABLED
#import <RNContactsSpec/RNContactsSpec.h>
#endif

#ifdef RCT_NEW_ARCH_ENABLED
@interface RCTContacts : RCTEventEmitter <NativeContactsSpec, CNContactViewControllerDelegate>
#else
@interface RCTContacts : RCTEventEmitter <CNContactViewControllerDelegate>
#endif

@end
