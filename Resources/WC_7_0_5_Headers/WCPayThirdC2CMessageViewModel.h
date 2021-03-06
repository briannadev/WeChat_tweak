//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseMessageViewModel.h"

@class BubbleInfo, NSString, UIColor, UIImage, WCPayNetImageResource;

@interface WCPayThirdC2CMessageViewModel : WCPayBaseMessageViewModel
{
    UIImage *_m_miniIconImage;
    WCPayNetImageResource *_m_backgroundResource;
    WCPayNetImageResource *_m_iconResource;
    WCPayNetImageResource *_m_miniIconResource;
    BubbleInfo *_thirdC2CBubbleInfo;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) NSString *backgroundName;
@property(readonly, nonatomic) NSString *backgroundUrl;
- (id)bgBubbleInfo;
- (id)cellViewClassName;
@property(readonly, nonatomic) UIColor *descColor;
- (id)descText;
- (void)getBackgroundImageWithBlock:(CDUnknownBlockType)arg1;
- (void)getIconImageWithBlock:(CDUnknownBlockType)arg1;
- (void)getMiniIconImageWithBlock:(CDUnknownBlockType)arg1;
- (double)iconSize;
- (id)iconUrl;
- (_Bool)isShowSourceView;
@property(retain, nonatomic) WCPayNetImageResource *m_backgroundResource; // @synthesize m_backgroundResource=_m_backgroundResource;
@property(retain, nonatomic) WCPayNetImageResource *m_iconResource; // @synthesize m_iconResource=_m_iconResource;
@property(retain, nonatomic) UIImage *m_miniIconImage; // @synthesize m_miniIconImage=_m_miniIconImage;
@property(retain, nonatomic) WCPayNetImageResource *m_miniIconResource; // @synthesize m_miniIconResource=_m_miniIconResource;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *miniIconUrl;
- (void)setMiniIconImage:(id)arg1;
@property(retain, nonatomic) BubbleInfo *thirdC2CBubbleInfo; // @synthesize thirdC2CBubbleInfo=_thirdC2CBubbleInfo;
- (id)sourceIcon;
- (id)sourceTitle;
@property(readonly, nonatomic) UIColor *titleColor;
- (id)titleText;

@end

