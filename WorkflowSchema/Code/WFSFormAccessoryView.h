//
//  WFSFormAccessoryView.h
//  WorkflowSchema
//
//  Created by Simon Booth on 27/11/2012.
//  Copyright (c) 2012 CRedit360. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFSSchematising.h"

@interface WFSFormAccessoryView : UIToolbar <WFSSchematising>

@property (nonatomic, strong) NSString *previousButtonTitle;
@property (nonatomic, strong) NSString *nextButtonTitle;

@end
