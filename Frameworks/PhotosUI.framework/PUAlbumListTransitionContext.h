/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PLAssetContainer>, NSIndexPath, PHCollection, PUPhotoDecoration, UICollectionViewTransitionLayout;

@interface PUAlbumListTransitionContext : NSObject {
    <PLAssetContainer> *_collection;
    NSIndexPath *_keyItemIndexPath;
    PHCollection *_phCollection;
    PUPhotoDecoration *_photoDecoration;
    UICollectionViewTransitionLayout *_transitionLayout;
    BOOL _usesContentOffsetAutoAdjust;
}

@property(retain) <PLAssetContainer> * collection;
@property(retain) NSIndexPath * keyItemIndexPath;
@property(retain) PHCollection * phCollection;
@property(retain) PUPhotoDecoration * photoDecoration;
@property(retain) UICollectionViewTransitionLayout * transitionLayout;
@property BOOL usesContentOffsetAutoAdjust;

- (void).cxx_destruct;
- (id)collection;
- (id)keyItemIndexPath;
- (id)phCollection;
- (id)photoDecoration;
- (void)setCollection:(id)arg1;
- (void)setKeyItemIndexPath:(id)arg1;
- (void)setPhCollection:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setTransitionLayout:(id)arg1;
- (void)setUsesContentOffsetAutoAdjust:(BOOL)arg1;
- (id)transitionLayout;
- (BOOL)usesContentOffsetAutoAdjust;

@end