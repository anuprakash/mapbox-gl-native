#pragma once

#include <mbgl/util/noncopyable.hpp>
#include <mbgl/map/camera.hpp>

#include <jni/jni.hpp>

namespace mbgl {
namespace android {

class CameraOptions : private mbgl::util::noncopyable {
public:

    static constexpr auto Name() { return "com/mapbox/mapboxsdk/camera/CameraOptions"; };

    static jni::Object<CameraOptions> New(jni::JNIEnv&, mbgl::CameraOptions);

    static jni::Class<CameraOptions> javaClass;

    static void registerNative(jni::JNIEnv&);

};


} // namespace android
} // namespace mbgl