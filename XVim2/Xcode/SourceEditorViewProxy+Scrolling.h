//
//  SourceEditorViewProxy+Scrolling.h
//  XVim2
//
//  Created by Ant on 02/10/2017.
//  Copyright © 2017 Shuichiro Suzuki. All rights reserved.
//

#import "SourceEditorViewProxy.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SourceEditorViewProxy (Scrolling)
- (void)xvim_scrollTo:(NSUInteger)insertionPoint;
@end

NS_ASSUME_NONNULL_END
