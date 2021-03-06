//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

@protocol WAStreamPlayerInterface <NSObject>
@property(nonatomic) unsigned int appService;
@property(nonatomic) _Bool autoPauseIfNavigate;
@property(nonatomic) _Bool autoPauseIfOpenNative;
@property(nonatomic) _Bool autoPlay;
@property(nonatomic) _Bool customCache;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)disableScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1;
@property(nonatomic) _Bool enablePageGesture;
@property(nonatomic) _Bool enablePageGestureFull;
- (unsigned int)getControlsMask;
- (UIImage *)getCurrentSnapshot;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2;
- (_Bool)isFullScreen;
- (_Bool)isPlaying;
@property(nonatomic) _Bool loop;
@property(nonatomic) _Bool needUpdateEvent;
@property(nonatomic) _Bool obeyMuteSwitch;
@property(nonatomic) long long orientation;
- (void)pause;
- (long long)pauseCount;
- (void)pausePlayAndLoading;
- (void)pauseTemp:(_Bool)arg1;
- (void)play:(_Bool)arg1;
- (void)relayoutForRotationWhileFullScreen;
@property(retain, nonatomic) NSString *scene;
- (void)seek:(double)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(UIColor *)arg2;
- (void)setControls:(unsigned int)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)setDuration:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setObjectFit:(long long)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
@property(nonatomic) _Bool showDanmu;
- (void)setSystemMuted:(_Bool)arg1;
@property(nonatomic) _Bool thumbFitWidth;
- (void)setTitle:(NSString *)arg1;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) __weak id <WAVideoPlayerViewDelegate> videoDelagate;
- (void)setVideoFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int videoId;
- (void)setVideoPath:(NSString *)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
@property(nonatomic) unsigned int videoTaskTimeout;
- (void)setVideoThumb:(NSString *)arg1;
- (void)setVideoThumbImage:(UIImage *)arg1;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (void)stop;
@end

