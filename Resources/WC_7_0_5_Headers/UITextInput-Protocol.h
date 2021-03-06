//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIKeyInput.h"

@class NSArray, NSDictionary, NSString, UITextPosition, UITextRange, UIView;

@protocol UITextInput <UIKeyInput>
- (long long)baseWritingDirectionForPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (struct CGRect)caretRectForPosition:(UITextPosition *)arg1;
- (UITextRange *)characterRangeAtPoint:(struct CGPoint)arg1;
- (UITextRange *)characterRangeByExtendingPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(UITextRange *)arg2;
- (long long)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
- (struct CGRect)firstRectForRange:(UITextRange *)arg1;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(UITextRange *)arg1 withText:(NSString *)arg2;
@property(copy) UITextRange *selectedTextRange;
- (NSArray *)selectionRectsForRange:(UITextRange *)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(UITextRange *)arg2;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (NSString *)textInRange:(UITextRange *)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (void)unmarkText;

@optional
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (long long)characterOffsetOfPosition:(UITextPosition *)arg1 withinRange:(UITextRange *)arg2;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (void)endFloatingCursor;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)insertDictationResult:(NSArray *)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 atCharacterOffset:(long long)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
@property(nonatomic) long long selectionAffinity;
- (_Bool)shouldChangeTextInRange:(UITextRange *)arg1 replacementText:(NSString *)arg2;
@property(readonly, nonatomic) UIView *textInputView;
- (NSDictionary *)textStylingAtPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
@end

