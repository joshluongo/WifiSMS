/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface WebCoreSharedBufferData : NSData 
{
    struct SharedBuffer { NSInteger x1; struct Vector<char,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<char,0ul> { 
                char *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x2; struct OwnPtr<WebCore::PurgeableBuffer> { 
            struct PurgeableBuffer {} *m_ptr; 
        } x3; struct RetainPtr<const __CFData*> { 
            struct __CFData {} *m_ptr; 
        } x4; } *sharedBuffer;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)initWithSharedBuffer:(struct SharedBuffer { NSInteger x1; struct Vector<char,0ul> { NSUInteger x_2_1_1; struct VectorBuffer<char,0ul> { char *x_2_2_1; NSUInteger x_2_2_2; } x_2_1_2; } x2; struct OwnPtr<WebCore::PurgeableBuffer> { struct PurgeableBuffer {} *x_3_1_1; } x3; struct RetainPtr<const __CFData*> { struct __CFData {} *x_4_1_1; } x4; }*)arg1;
- (NSUInteger)length;
- (const void*)bytes;

@end
