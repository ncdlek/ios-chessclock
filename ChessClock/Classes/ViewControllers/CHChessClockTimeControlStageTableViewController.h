//
//  CHTimeControlStageTableViewController.h
//  Chess.com
//
//  Created by Pedro Bolaños on 11/1/12.
//  Copyright (c) 2012 psbt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CHChessClockTimeControlStageTableViewController;
@class CHChessClockTimeControlStage;
@class CHChessClockTimeControlStageManager;

//------------------------------------------------------------------------------
#pragma mark - CHTimeControlStageTableViewControllerDelegate
//------------------------------------------------------------------------------
@protocol CHChessClockTimeControlStageTableViewControllerDelegate <NSObject>

- (void)timeControlStageTableViewControllerStageUpdated:(CHChessClockTimeControlStageTableViewController*)viewController;
- (void)timeControlStageTableViewControllerStageDeleted:(CHChessClockTimeControlStageTableViewController*)viewController;

@end

//------------------------------------------------------------------------------
#pragma mark - CHTimeControlStageTableViewController
//------------------------------------------------------------------------------
@interface CHChessClockTimeControlStageTableViewController : UITableViewController

@property (weak, nonatomic) id<CHChessClockTimeControlStageTableViewControllerDelegate> delegate;

@property (strong, nonatomic) CHChessClockTimeControlStage* timeControlStage;
@property (strong, nonatomic) CHChessClockTimeControlStageManager* timeControlStageManager;

@end
