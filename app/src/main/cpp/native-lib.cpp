#include <jni.h>
#include <string>
#include "guetzli/guetzli/guetzli.cc"
#include <android/log.h>
#define LOGE(...) \
  ((void)__android_log_print(ANDROID_LOG_ERROR, "compress::", __VA_ARGS__))

extern "C"
JNIEXPORT jint

JNICALL Java_io_haydar_supportcompressimage_MainActivity_compressImage(
        JNIEnv *env, jobject instance,
        jstring inputImagePath_,
        jstring outputImagePath_
       ) {
    const char *inputImagePath = env->GetStringUTFChars(inputImagePath_, 0);
    const char *outputImagePath = env->GetStringUTFChars(outputImagePath_, 0);
    LOGE("开始压缩了");
    return compressImage(inputImagePath, outputImagePath);;
}
