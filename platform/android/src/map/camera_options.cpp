#include "camera_options.hpp"

namespace mbgl {
namespace android {

jni::Object<CameraOptions> CameraOptions::New(jni::JNIEnv &env, mbgl::CameraOptions options) {
    static auto constructor = CameraOptions::javaClass.GetConstructor<double, double, double, double, double>(env);
    auto center = options.center.value_or(LatLng{});
    return CameraOptions::javaClass.New(env, constructor, center.latitude(), center.longitude(), options.zoom.value_or(0), options.angle.value_or(0), options.pitch.value_or(0));
}

void CameraOptions::registerNative(jni::JNIEnv &env) {
    // Lookup the class
    CameraOptions::javaClass = *jni::Class<CameraOptions>::Find(env).NewGlobalRef(env).release();
}

jni::Class<CameraOptions> CameraOptions::javaClass;


} // namespace android
} // namespace mb

