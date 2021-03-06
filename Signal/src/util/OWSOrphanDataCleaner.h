//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

// Notes:
//
// * On disk, we only bother cleaning up files, not directories.
@interface OWSOrphanDataCleaner : NSObject

- (instancetype)init NS_UNAVAILABLE;

// This is exposed for the debug UI.
+ (void)auditAndCleanup:(BOOL)shouldCleanup;

+ (void)auditOnLaunchIfNecessary;

@end

NS_ASSUME_NONNULL_END
