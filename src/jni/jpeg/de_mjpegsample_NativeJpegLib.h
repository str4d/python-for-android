/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_mjpegsample_NativeJpegLib */

#ifndef _Included_de_mjpegsample_NativeJpegLib
#define _Included_de_mjpegsample_NativeJpegLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_mjpegsample_NativeJpegLib
 * Method:    allocateNativeBuffer
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_de_mjpegsample_NativeJpegLib_allocateNativeBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     de_mjpegsample_NativeJpegLib
 * Method:    freeNativeBuffer
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_de_mjpegsample_NativeJpegLib_freeNativeBuffer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     de_mjpegsample_NativeJpegLib
 * Method:    c_compress_jpeg
 * Signature: (III[B)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_de_mjpegsample_NativeJpegLib_c_1compress_1jpeg
  (JNIEnv *, jclass, jint, jint, jint, jbyteArray);

/*
 * Class:     de_mjpegsample_NativeJpegLib
 * Method:    c_decompress_jpeg
 * Signature: (II[B)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_de_mjpegsample_NativeJpegLib_c_1decompress_1jpeg
  (JNIEnv *, jclass, jint, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
