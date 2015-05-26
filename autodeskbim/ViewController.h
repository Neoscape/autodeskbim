//
//  ViewController.h
//  autodeskbim
//
//  Created by Evan Buxton on 5/5/15.
//  Copyright (c) 2015 Evan Buxton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVPlayer.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVMediaFormat.h>
#import <AVFoundation/AVAudioMix.h>
#import <AVFoundation/AVAssetTrack.h>
#import <AVFoundation/AVPlayerItem.h>
#import <AVFoundation/AVFoundation.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>

@protocol ModalViewDelegate

-(void) didReceiveMessage:(NSString *)message;

@end

@interface ViewController : UIViewController<ModalViewDelegate, UIGestureRecognizerDelegate>
{
    UISwipeGestureRecognizer        *swipeRightRecognizer;
    UISwipeGestureRecognizer        *swipeLeftRecognizer;
    UISwipeGestureRecognizer        *swipeUpRecognizer;
    UISwipeGestureRecognizer        *swipeDownRecognizer;
}

@property (nonatomic, retain) id<ModalViewDelegate>             delegate;
@property (nonatomic, retain) IBOutlet UIButton                 *uib_playBtn1;
@property (retain, nonatomic) IBOutlet UIButton                 *uib_playBtn2;
@property (retain, nonatomic) IBOutlet UIButton                 *uib_playBtn3;
@property (nonatomic, retain) IBOutlet UIImageView              *uiiv_movieThumb1;
@property (retain, nonatomic) IBOutlet UIImageView              *uiiv_movieThumb2;
@property (retain, nonatomic) IBOutlet UIImageView              *uiiv_movieThumb3;
@property (nonatomic, retain) IBOutlet UIView                   *uiv_movieViewTop;
@property (nonatomic, retain) IBOutlet UIView                   *uiv_movieViewBottom;
@property (nonatomic, retain) IBOutlet UIView                   *uiv_movieViewBlack;
@property (retain, nonatomic) IBOutlet UILabel                  *uil_version;
@property (nonatomic, retain) IBOutlet UISegmentedControl       *movieBtns;
@property (weak, nonatomic) IBOutlet UIImageView *autodesk_logo;

@property (nonatomic, retain) NSArray                           *arr_TimecodeRaw;
@property (nonatomic, retain) NSMutableArray                    *arr_Timecode;
@property (nonatomic, retain) NSArray                           *arr_ChapterInfo;
@property (nonatomic, retain) NSMutableArray                    *arr_ChapterTitles;
@property (nonatomic, retain) NSArray                           *arr_SelectedChapter;
@property (nonatomic, retain) NSArray                           *arr_filmsFromPlist;
@property (nonatomic) NSUInteger                                movieTag;
@property (nonatomic, retain) NSString                          *url;

-(void)dismissModal;
-(IBAction)playThisMovie:(id)sender;
-(IBAction)movieShouldJump:(id)sender;

@end
