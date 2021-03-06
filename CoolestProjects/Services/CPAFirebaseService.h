//
//  CPAFirebaseService.h
//  CoolestProjects
//
//  Created by BooRanger on 30/05/2016.
//  Copyright © 2016 coderdojo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CPASponsorTier;
@class CPAAbout;
@class CPARegion;

typedef void(^CPAServiceGetSponsorsCompletion)(NSArray<CPASponsorTier *> * _Nullable sponsorTiers, NSError * _Nullable error);

typedef void(^CPAServiceGetAboutInfoCompletion)(CPAAbout * _Nullable regions, NSError * _Nullable error);

typedef void(^CPAServiceGetBeaconRegionsCompletion)(NSArray<CPARegion *> * _Nullable regions, NSError * _Nullable error);


@protocol CPAFirebaseService <NSObject>

/**
 *  Get a list of the tier and sponsors for that tier
 */
- (void)getSponsorsWithCompletionBlock:(nullable CPAServiceGetSponsorsCompletion)completionBlock;

/**
 * Gets the "About" section (disclaimer/credits)
 */
- (void)getAboutInfoWithCompletionBlock:(nullable CPAServiceGetAboutInfoCompletion)completionBlock;

/**
 *  Get a list of the "virtual regions" with the beacons associated with it
 */
- (void)getRegionsWithCompletionBlock:(nullable CPAServiceGetBeaconRegionsCompletion)completionBlock NS_SWIFT_NAME(getRegions(_:));

@end
