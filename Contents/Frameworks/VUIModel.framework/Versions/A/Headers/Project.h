//
//  Project.h
//  Ovation
//
//  Created by Barry Wark on 6/9/08.
//  Copyright 2008 Barry Wark. All rights reserved.
//

#import <CoreData/CoreData.h>

@class SpotlightDataStoreCollection;
@class BWFileSystemResource;

@interface Project :  NSManagedObject  
{
}

@property (retain) NSString * description;
@property (retain) id projectRootURL;
@property (retain) id searchPredicate;
@property (retain) id uiPreferences;
@property (retain) id userInfo;
@property (retain) NSSet* fileSystemDataStores;
@property (retain) NSSet* savedPredicates;
@property (retain) NSSet* spotlightDataStoreCollections;

// custom
@property (readonly) NSSet *dataStoreURLs;
@end

@interface Project (CoreDataGeneratedAccessors)
- (void)addFileSystemDataStoresObject:(BWFileSystemResource *)value;
- (void)removeFileSystemDataStoresObject:(BWFileSystemResource *)value;
- (void)addFileSystemDataStores:(NSSet *)value;
- (void)removeFileSystemDataStores:(NSSet *)value;

- (void)addSavedPredicatesObject:(NSManagedObject *)value;
- (void)removeSavedPredicatesObject:(NSManagedObject *)value;
- (void)addSavedPredicates:(NSSet *)value;
- (void)removeSavedPredicates:(NSSet *)value;

- (void)addSpotlightDataStoreCollectionsObject:(SpotlightDataStoreCollection *)value;
- (void)removeSpotlightDataStoreCollectionsObject:(SpotlightDataStoreCollection *)value;
- (void)addSpotlightDataStoreCollections:(NSSet *)value;
- (void)removeSpotlightDataStoreCollections:(NSSet *)value;
@end

