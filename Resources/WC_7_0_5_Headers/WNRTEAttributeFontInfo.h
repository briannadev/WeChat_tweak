//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface WNRTEAttributeFontInfo : NSObject <NSCopying>
{
    UIColor *fontColor;
    double fontSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor;
@property(nonatomic) double fontSize; // @synthesize fontSize;
- (_Bool)isEqual:(id)arg1;

@end
