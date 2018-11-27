host_build {
    QT_ARCH = x86_64
    QT_BUILDABI = x86_64-little_endian-lp64
    QT_TARGET_ARCH = x86_64
    QT_TARGET_BUILDABI = x86_64-little_endian-lp64
} else {
    QT_ARCH = x86_64
    QT_BUILDABI = x86_64-little_endian-lp64
}
QT.global.enabled_features = cross_compile shared c++11 c++14 c++1z concurrent pkg-config
QT.global.disabled_features = framework rpath appstore-compliant debug_and_release simulator_and_device build_all force_asserts separate_debug_info static
PKG_CONFIG_SYSROOT_DIR = /
PKG_CONFIG_LIBDIR = /opt/mxe/usr/x86_64-w64-mingw32.shared/lib/pkgconfig
CONFIG += cross_compile shared release no_plugin_manifest
QT_CONFIG += shared release c++11 c++14 c++1z concurrent dbus stl
QT_VERSION = 5.9.3
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 9
QT_PATCH_VERSION = 3
QT_GCC_MAJOR_VERSION = 5
QT_GCC_MINOR_VERSION = 4
QT_GCC_PATCH_VERSION = 0
QT_EDITION = OpenSource
