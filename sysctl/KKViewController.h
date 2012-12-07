//
//  KKViewController.h
//  sysctl
//
//  Created by XiangBo Kong on 11-11-5.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>
@interface KKViewController : UIViewController<MFMailComposeViewControllerDelegate>
@property (nonatomic, retain) IBOutlet  UITextView *textView;
-(IBAction)sendmail:(id)sender;
- (NSString *)applicationDocumentsDirectory;
-(IBAction)showPicker:(id)sender;
-(void)displayComposerSheet;
-(void)launchMailAppOnDevice;
@end
