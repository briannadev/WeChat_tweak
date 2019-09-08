//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageTwoInputHighPassFilter, NSArray, TTImageSimpleBlurFilter, TTImageSmoothBorderBlurFilter, TTImageSmoothProcessFilter3, TTImageSmoothShowBorderFilter;

@interface TTGpuImageBlackVarianceFilterGroup : GPUImageFilterGroup
{
    TTImageSimpleBlurFilter *_blurFilter;
    TTImageSmoothShowBorderFilter *_borderFilter;
    TTImageSmoothBorderBlurFilter *_borderBlurFilter;
    TTImageSimpleBlurFilter *_blurFilter2;
    TTImageSmoothShowBorderFilter *_borderFilter2;
    TTImageSmoothBorderBlurFilter *_borderBlurFilter2;
    GPUImageTwoInputHighPassFilter *_highPassFilter;
    TTImageSmoothProcessFilter3 *_procSmoothFilter;
    _Bool _useBeautyB;
    NSArray *_faceRects;
}

- (void).cxx_destruct;
- (id)beautyBlurFilter;
- (id)borderBlurFilter;
- (id)borderFilter;
- (void)cleanFilterChain;
@property(retain, nonatomic) NSArray *faceRects; // @synthesize faceRects=_faceRects;
- (id)initWithOption:(_Bool)arg1 existBeautyFilter:(_Bool)arg2;
- (id)initWithOption:(_Bool)arg1 existBeautyFilter:(_Bool)arg2 beautyB:(_Bool)arg3;
- (id)procSmoothFilter;
- (void)setupFilterChain;
- (void)updateFilterForceBlurSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool useBeautyB; // @synthesize useBeautyB=_useBeautyB;

@end
