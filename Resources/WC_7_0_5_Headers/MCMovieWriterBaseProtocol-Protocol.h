//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, GLKTextureInfo, NSMutableArray;

@protocol MCMovieWriterBaseProtocol <NSObject>
@property(readonly, nonatomic) AVAssetWriter *assetWriter;
@property(nonatomic) __weak id <MCMovieWriterDelegate> delegate;
- (void)finishRecording:(void (^)(NSDictionary *))arg1;
@property(retain, nonatomic) NSMutableArray *gifFrameArray;
@property(nonatomic) double gifFrameScale;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setHasAudioTrack:(_Bool)arg1;
@property(nonatomic) struct CGAffineTransform videoTransform;
@property(retain, nonatomic) GLKTextureInfo *watermark;
@end

