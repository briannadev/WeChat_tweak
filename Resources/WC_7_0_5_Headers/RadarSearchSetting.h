//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface RadarSearchSetting : NSObject <NSCoding>
{
    int _usrEduTimes;
    int _enterRadarTimes;
}

- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int enterRadarTimes; // @synthesize enterRadarTimes=_enterRadarTimes;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int usrEduTimes; // @synthesize usrEduTimes=_usrEduTimes;

@end
