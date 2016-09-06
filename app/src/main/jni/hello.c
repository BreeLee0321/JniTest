#include <string.h>
#include <jni.h>


//返回值  Java_所要实现的方法名所在java类用下划线替代点的引用地址_方法名(JNI环境变量 env,JNI环境对象 jobj)
jstring Java_bree_com_jnitest_JniMethods_sayHello
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "i am C");
}