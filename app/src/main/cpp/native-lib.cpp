#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_eyeblink_eyeblinkopencv_MainActivity_testFunction(JNIEnv *env, jobject ) {

    // TODO
    std::string s = "hello ramakant";

    return env->NewStringUTF(s.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_eyeblink_eyeblinkopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
