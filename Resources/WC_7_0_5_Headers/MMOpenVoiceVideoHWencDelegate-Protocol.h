//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol MMOpenVoiceVideoHWencDelegate <NSObject>
- (void)gotEncodedData:(NSData *)arg1 isKeyFrame:(_Bool)arg2;
- (void)gotSpsPps:(NSData *)arg1 pps:(NSData *)arg2;
- (void)gotXps:(NSData *)arg1;
@end

