/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, ODDNodePoint, ODDTransitionPoint;



@interface ODDNodePoint : ODDDataPoint 
{
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}


- (void)dealloc;
- (void)setType:(NSInteger)arg1;
- (id)parent;
- (id)children;
- (void)addChild:(id)arg1 order:(unsigned long)arg2;
- (id)parentTransition;
- (void)setParentTransition:(id)arg1;
- (id)siblingTransition;
- (void)setSiblingTransition:(id)arg1;

@end
