#include <stdio.h>
#include <jni.h>

const char* consoleElement()
{
        return "Yeah 2 !\n";
}
extern "C" {
    JNIEXPORT jstring JNICALL Java_com_zenika_test2_MainActivity_invokeNativeFunction(JNIEnv* env, jobject thiz)
    {
        return env->NewStringUTF(consoleElement());
    }
}
