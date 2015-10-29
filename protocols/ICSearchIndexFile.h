/* Generated by RuntimeBrowser.
 */

@protocol ICSearchIndexFile

@required

- (void)addDocumentWithIdentifier:(NSString *)arg1 content:(NSString *)arg2 transactionId:(id*)arg3;
- (void)close;
- (BOOL)createWithURL:(NSURL *)arg1;
- (NSString *)name;
- (BOOL)openWithURL:(NSURL *)arg1 transactionId:(id*)arg2;
- (BOOL)opened;
- (void)removeDocumentsForIdentifiers:(NSArray *)arg1;

@end