//
//  OptionAnswer.h
//  inSPorte
//
//  Created by Fabio Dela Antonio on 10/26/13.
//  Copyright (c) 2013 Bad Request. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OptionAnswer : NSObject

@property (nonatomic) unsigned idOption;

- (id)initWithId:(unsigned)idOption;
- (NSDictionary *)jsonData;

@end
