//
//  ViewController.h
//  CollectionView
//
//  Created by Hu Aihong on 15-8-20.
//  Copyright (c) 2015年 ChinaCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>{
    
}
@property (strong, nonatomic)UICollectionView *collectionView;

@end

