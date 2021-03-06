/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAttributeController : NSObject {
    unsigned int  _arrowHeadStyle;
    int  _brushStyle;
    AKController * _controller;
    UIColor * _fillColor;
    UIFont * _font;
    BOOL  _hasShadow;
    int  _highlightStyle;
    UIColor * _strokeColor;
    BOOL  _strokeIsDashed;
    float  _strokeWidth;
    NSDictionary * _textAttributes;
    AKPageModelController * modelControllerToObserveForSelections;
}

@property unsigned int arrowHeadStyle;
@property int brushStyle;
@property AKController *controller;
@property (retain) UIColor *fillColor;
@property (retain) UIFont *font;
@property BOOL hasShadow;
@property int highlightStyle;
@property (nonatomic, retain) AKPageModelController *modelControllerToObserveForSelections;
@property (retain) UIColor *strokeColor;
@property BOOL strokeIsDashed;
@property float strokeWidth;
@property (retain) NSDictionary *textAttributes;

+ (id)defaultFont;
+ (id)defaultTextAttributes;
+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)_isEnabledForSender:(id)arg1 segment:(int)arg2 withSelectedAnnotations:(id)arg3;
- (void)_persistCurrentAttributes;
- (void)_restorePersistedAttributes;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(int)arg2;
- (void)_updateStateOnSender:(id)arg1 segment:(int)arg2;
- (BOOL)_updateStateOnSender:(id)arg1 segment:(int)arg2 fromSelectedAnnotations:(id)arg3;
- (void)_updateStateOnSenderFromSelf:(id)arg1 segment:(int)arg2;
- (unsigned int)arrowHeadStyle;
- (int)brushStyle;
- (id)controller;
- (id)fillColor;
- (id)font;
- (BOOL)hasShadow;
- (int)highlightStyle;
- (id)initWithController:(id)arg1;
- (BOOL)isAttributeSenderEnabled:(id)arg1 segment:(int)arg2;
- (id)modelControllerToObserveForSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAttributeActionForSender:(id)arg1 segment:(int)arg2;
- (void)restoreStrokeColorToSystemDefault;
- (void)setArrowHeadStyle:(unsigned int)arg1;
- (void)setBrushStyle:(int)arg1;
- (void)setController:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setHighlightStyle:(int)arg1;
- (void)setModelControllerToObserveForSelections:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeIsDashed:(BOOL)arg1;
- (void)setStrokeWidth:(float)arg1;
- (void)setTextAttributes:(id)arg1;
- (id)strokeColor;
- (BOOL)strokeColorIsEqualTo:(id)arg1;
- (BOOL)strokeIsDashed;
- (float)strokeWidth;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (id)textAttributes;
- (void)updateAttributeSenderState:(id)arg1 segment:(int)arg2 enabled:(BOOL)arg3;

@end
