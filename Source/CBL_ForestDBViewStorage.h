//
//  CBL_ForestDBViewStorage.h
//  CouchbaseLite
//
//  Created by Jens Alfke on 1/14/15.
//
//

#import "CBL_ViewStorage.h"
@class CBL_ForestDBStorage;


@interface CBL_ForestDBViewStorage : NSObject <CBL_ViewStorage>

// internal:
- (instancetype) initWithDBStorage: (CBL_ForestDBStorage*)dbStorage
                              name: (NSString*)name
                            create: (BOOL)create;
+ (NSString*) fileNameToViewName: (NSString*)fileName;

@end
