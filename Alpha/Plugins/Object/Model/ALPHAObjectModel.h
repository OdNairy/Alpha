//
//  ALPHAObjectModel.h
//  Alpha
//
//  Created by Dal Rupnik on 11/06/15.
//  Copyright (c) 2015 Unified Sense. All rights reserved.
//

#import "ALPHAModel.h"
#import "ALPHAObjectContent.h"

/*!
 *  Object model that is displayable as a model
 */
@interface ALPHAObjectModel : ALPHAModel

/*!
 *  Object pointer
 */
@property (nonatomic, copy) NSString *objectPointer;

/*!
 *  Class name of object that is described with object model
 */
@property (nonatomic, copy) NSString *objectClass;

/*!
 *  Contains the class name of Apple superclass - usually NSObject, but can be array, set,
 *  or UIKit. Nil if class or metaclass. This is to ensure we can handle view controller
 *  subclasses correctly.
 */
@property (nonatomic, copy) NSString *objectMainSuperclass;

/*!
 *  Stores object description
 */
@property (nonatomic, copy) NSString *objectDescription;

/*!
 *  Object content retains object, so arrays, sets and dictionaries can be resolved
 */
@property (nonatomic, copy) ALPHAObjectContent *objectContent;


//
// Object model
//
@property (nonatomic, copy) NSArray *properties;

@property (nonatomic, copy) NSArray *ivars;

@property (nonatomic, copy) NSArray *methods;

@property (nonatomic, copy) NSArray *classMethods;

@property (nonatomic, copy) NSArray *superclasses;

@end