//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BrandProfileMessageBaseViewModel.h"

@class NSMutableArray, NSString;

@interface BrandProfileMessageTextViewModel : BrandProfileMessageBaseViewModel
{
    struct CGSize _fullTitleSize;
    NSMutableArray *_fullTitleStyles;
    struct CGSize _partTitleSize;
    NSMutableArray *_partTitleStyles;
    _Bool _isExpanded;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double bottomHeight;
@property(readonly, nonatomic) NSString *bottomStr;
- (void)calTitleSizeAndTitleStyles;
- (void)clearLayoutCache;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic) _Bool isLongText;
- (_Bool)isShowLargeCover;
- (double)normalItemHeight;
- (id)tableViewCellClassName;
- (id)titleLabelStyles;
- (double)titleMaxWidth;
- (struct CGSize)titleSize;
- (id)titleStr;
- (double)topItemHeight;
- (double)viewHeight;

@end

