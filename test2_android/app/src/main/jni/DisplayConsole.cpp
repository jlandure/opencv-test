#include <stdio.h>
#include <string.h>
#include <jni.h>

int consoleElement()
{
        printf("Yeah2 !\n");
        return 0;
}
extern "C" {
    JNIEXPORT jstring JNICALL Java_com_zenika_test2_MainActivity_invokeNativeFunction(JNIEnv* env, jobject thiz)
    {
        return env->NewStringUTF("Yeah2 !\n");
    }
}
