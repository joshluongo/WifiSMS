/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, NSArray, NSMutableSet;



@interface WebPluginDatabase : NSObject 
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (id)_defaultPlugInPaths;

- (id)pluginForKey:(id)arg1 withEnumeratorSelector:(SEL)arg2;
- (id)pluginForMIMEType:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (id)plugins;
- (void)setPlugInPaths:(id)arg1;
- (void)close;
- (id)init;
- (void)dealloc;
- (void)refresh;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;
- (void)_addPlugin:(id)arg1;
- (void)_removePlugin:(id)arg1;
- (id)_scanForNewPlugins;

@end
