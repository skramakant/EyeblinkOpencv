
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_eyeblink_eyeblinkopencv_MainActivity_funSpotDetection(JNIEnv *env, jobject ) {

    // TODO
    std::string s = "hello ramakant";

    return env->NewStringUTF(s.c_str());
}