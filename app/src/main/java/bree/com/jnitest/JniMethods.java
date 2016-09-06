package bree.com.jnitest;

/**
 * Created by bree on 2016/9/6.
 */


public class JniMethods {
    static {
        System.loadLibrary("jnimodele");
    }
    public native String sayHello();

}
