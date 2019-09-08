//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

@class NSMutableDictionary, NSNumber, UIImageView, UILabel, UIView;

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
    _Bool m_bNonControllerBind;
    _Bool m_bForbidCenterPlaceLabel;
    NSMutableDictionary *_dicKVOHelper;
    UIView *_bottomLine;
    NSNumber *_oIconDefaultWidth;
    struct CGSize _iconDefaultSize;
    _Bool _bForbidAdjustIconSize;
    unsigned long long _bottomLineStyle;
    unsigned long long _eControlState;
    UILabel *_tipsLabel;
    UIImageView *_rightLoadingView;
}

- (void).cxx_destruct;
- (void)animateFakeCursor;
@property(nonatomic) _Bool bForbidAdjustIconSize; // @synthesize bForbidAdjustIconSize=_bForbidAdjustIconSize;
- (_Bool)becomeFirstResponder;
@property(nonatomic) unsigned long long bottomLineStyle; // @synthesize bottomLineStyle=_bottomLineStyle;
- (void)dealloc;
- (void)didMoveToSuperview;
@property(nonatomic) unsigned long long eControlState; // @synthesize eControlState=_eControlState;
- (id)findCancelButton;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (void)fixIOS13Issue;
- (void)fixLayoutOnActiveSearch;
- (void)fixOrientationBug;
- (void)fixPlaceHolderColor;
- (void)fixPlaceLabelCenterAlign;
- (void)fixSearchBarBackgroundWhenActive;
- (void)fixSearchIconSize;
- (void)fixTextField;
- (void)fixTipsCenterAlign;
- (void)fixTipsLeftAlign;
- (id)genFakeCursor;
- (id)getTextField;
- (_Bool)handleCursorObserveForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)internalFindPlaceHolderIcon;
- (void)internalInitTipsLabel;
- (void)layoutSubviews;
- (void)layoutTagView;
@property(nonatomic) _Bool m_bForbidCenterPlaceLabel; // @synthesize m_bForbidCenterPlaceLabel;
@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
@property(nonatomic) _Bool m_bNonControllerBind; // @synthesize m_bNonControllerBind;
- (void)observeSearchIcon;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)recursiveFindCancelButton:(id)arg1;
- (void)removeFakeCursor;
- (void)removeTextLoadingView;
- (void)resetAttributes;
- (void)resetTextAttributes;
- (_Bool)resignFirstResponder;
@property(retain, nonatomic) UIImageView *rightLoadingView; // @synthesize rightLoadingView=_rightLoadingView;
- (void)safeAddKVOForObj:(id)arg1 forKeyPath:(id)arg2;
- (void)safeRemoveKVOForObj:(id)arg1 forKeyPath:(id)arg2;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTagAttributeText:(id)arg1;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setTipsLabelText:(id)arg1;
- (void)showTextLoadingView;
- (void)textFieldAddSubView:(id)arg1;
- (void)updateBottomLineStyle;

@end
