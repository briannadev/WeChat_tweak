//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MMWebImageViewDelegate.h"
#import "MinimizeDetailTaskListViewInterface.h"
#import "MoveWithTouchAlgorithmDelegate.h"

@class CAShapeLayer, MMUIButton, MinimizeTaskData, NSArray, NSString, UIButton, UIColor, UILabel;

@interface MinimizeDraggableTaskView : UIView <MMWebImageViewDelegate, MinimizeDetailTaskListViewInterface, MoveWithTouchAlgorithmDelegate>
{
    id <MinimizeDraggableTaskViewDelegate> _m_delegate;
    MinimizeTaskData *_taskData;
    UIButton *_containerView;
    UIView *_taskIcon;
    UIColor *_gradientBackgroundColor;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_titleTailLabel;
    UILabel *_subTitleTailLabel;
    double _titleMaxWidthWithCurrentState;
    unsigned long long _positionType;
    UIView *_shadowLayerView;
    UIView *_shadowSubLayerView;
    UIButton *_closeBtn;
    MMUIButton *_controlBtn;
    UIView *_whiteBackgroundView;
    NSArray *_passiveStateIconList;
    CAShapeLayer *_outterBorderLayer;
    CAShapeLayer *_innerBorderLayer;
    struct CGRect _frameBeforeMove;
}

- (void).cxx_destruct;
- (struct CGRect)calcFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (double)closeBtnRightMargin;
@property(retain, nonatomic) UIButton *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *controlBtn; // @synthesize controlBtn=_controlBtn;
@property(nonatomic) struct CGRect frameBeforeMove; // @synthesize frameBeforeMove=_frameBeforeMove;
- (id)getDefaultClipPath:(struct CGRect)arg1 positionType:(unsigned long long)arg2;
- (id)getNormalBackgroundColor;
- (unsigned long long)getPositionType:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *gradientBackgroundColor; // @synthesize gradientBackgroundColor=_gradientBackgroundColor;
- (void)hideBackgroundColor;
- (void)hideIcon;
- (void)hideShadow;
- (void)hideSubviewsWhenMaximizeBegin;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) CAShapeLayer *innerBorderLayer; // @synthesize innerBorderLayer=_innerBorderLayer;
- (void)layoutSubviews;
@property(nonatomic) __weak id <MinimizeDraggableTaskViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onBtnClicked:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onLongPressEvent;
- (void)onMoveBeginWithTouchAlgorithmBegin:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmMoveLong;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveWithTouchAlgorithmTaped;
- (void)onMoveWithTouchAlgorithnMoveEnd:(struct CGPoint)arg1;
@property(retain, nonatomic) CAShapeLayer *outterBorderLayer; // @synthesize outterBorderLayer=_outterBorderLayer;
@property(retain, nonatomic) NSArray *passiveStateIconList; // @synthesize passiveStateIconList=_passiveStateIconList;
@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;
- (void)removeShadowAndAddBorder;
- (void)resetAllView;
- (void)resetBorderLayer;
- (void)setAlpha:(double)arg1;
- (void)setCloseBtnVisible:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *shadowLayerView; // @synthesize shadowLayerView=_shadowLayerView;
@property(retain, nonatomic) UIView *shadowSubLayerView; // @synthesize shadowSubLayerView=_shadowSubLayerView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *subTitleTailLabel; // @synthesize subTitleTailLabel=_subTitleTailLabel;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(retain, nonatomic) UIView *taskIcon; // @synthesize taskIcon=_taskIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double titleMaxWidthWithCurrentState; // @synthesize titleMaxWidthWithCurrentState=_titleMaxWidthWithCurrentState;
@property(retain, nonatomic) UILabel *titleTailLabel; // @synthesize titleTailLabel=_titleTailLabel;
@property(retain, nonatomic) UIView *whiteBackgroundView; // @synthesize whiteBackgroundView=_whiteBackgroundView;
- (void)showBackgroundColor;
- (void)showIcon;
- (void)showShadow;
- (void)showSubviewsWhenMaximizeEnd;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(struct CGRect)arg2 PositionType:(unsigned long long)arg3 BorderColor:(id)arg4 BorderWidth:(double)arg5;
- (void)updateMask:(_Bool)arg1 Duration:(double)arg2;
- (void)updateMask:(_Bool)arg1 View:(id)arg2 Duration:(double)arg3;
- (void)updatePositionType:(unsigned long long)arg1;
- (void)updateShadow:(_Bool)arg1 Duration:(double)arg2;
- (void)updateTask:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;
- (void)updateUI:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

