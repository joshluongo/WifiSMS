/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDialog, ISDialogButton;



@interface ISDialogOperation : ISOperation 
{
    ISDialog *_dialog;
    BOOL _performDefaultActions;
    ISDialogButton *_selectedButton;
    id _userNotification;
}

@property(retain) id userNotification; /* unknown property attribute: V_userNotification */
@property(retain) ISDialogButton *selectedButton; /* unknown property attribute: V_selectedButton */
@property BOOL performDefaultActions; /* unknown property attribute: V_performDefaultActions */
@property(retain) ISDialog *dialog; /* unknown property attribute: V_dialog */
@property <ISDialogOperationDelegate> *delegate;

+ (id)operationWithDialog:(id)arg1;
+ (id)operationWithError:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)handleButtonSelected:(NSInteger)arg1 withResponseDictionary:(id)arg2;
- (void)cancel;
- (void)run;
- (void)_handleResponseForNotification:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long)arg2;
- (void)_showUserNotification:(id)arg1;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification { }*)arg1;
- (id)userNotification;
- (void)setUserNotification:(id)arg1;
- (id)selectedButton;
- (void)setSelectedButton:(id)arg1;
- (BOOL)performDefaultActions;
- (void)setPerformDefaultActions:(BOOL)arg1;
- (id)dialog;
- (void)setDialog:(id)arg1;

@end
