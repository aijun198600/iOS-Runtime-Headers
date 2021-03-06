/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDisplayProfile : PKDisplayProfile <NSCopying, NSSecureCoding> {
    PKColor * _backgroundColor;
    PKColor * _foregroundColor;
    BOOL  _hasBackgroundImage;
    BOOL  _hasStripImage;
    PKColor * _labelColor;
    NSData * _manifestHash;
    int  _passStyle;
    PKColor * _stripColor;
    BOOL  _tallCode;
}

@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL hasStripImage;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, readonly) int layoutMode;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic) int passStyle;
@property (nonatomic, readonly) BOOL showsBackgroundImage;
@property (nonatomic, readonly) BOOL showsStripImage;
@property (nonatomic, retain) PKColor *stripColor;
@property (nonatomic) BOOL tallCode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (BOOL)hasBackgroundImage;
- (BOOL)hasStripImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)labelColor;
- (int)layoutMode;
- (id)manifestHash;
- (int)passStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHasBackgroundImage:(BOOL)arg1;
- (void)setHasStripImage:(BOOL)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassStyle:(int)arg1;
- (void)setStripColor:(id)arg1;
- (void)setTallCode:(BOOL)arg1;
- (BOOL)showsBackgroundImage;
- (BOOL)showsStripImage;
- (id)stripColor;
- (BOOL)tallCode;
- (int)type;

@end
