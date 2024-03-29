//
//  ViewController.h
//  CP
//
//  Created by Adriano Soares on 12/05/16.
//  Copyright © 2016 Adriano Soares. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/opencv.hpp>

#import <opencv2/imgcodecs/ios.h>
#import <opencv2/videoio/cap_ios.h>
#import <SVProgressHUD/SVProgressHUD.h>

#import "Detector.h"


@interface ViewController : UIViewController<CvVideoCameraDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@end

