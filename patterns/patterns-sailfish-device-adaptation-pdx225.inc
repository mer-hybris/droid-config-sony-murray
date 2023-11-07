%package -n patterns-sailfish-device-adaptation-pdx225
Summary: Jolla HW Adaptation pdx225
Requires: droid-hal-pdx225
Requires: droid-hal-pdx225-img-boot
Requires: droid-hal-pdx225-img-recovery
Requires: droid-hal-pdx225-kernel-dtbo
Requires: droid-hal-pdx225-tools
Requires: droid-hal-pdx225-vendor_boot

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-binder-plugin
Requires: dummy_netd
#Requires: modem_auto_config
#Requires: ofono-vendor-qti-radio-plugin

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
#Requires: sailfish-devicelock-fpd
Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC support
# 1. binder plugin requires Android 8 or a newer base
# 2. pn54x plugin talks directly to pn54x driver
# These plugins are mutually exclusive, you need to pick one:
Requires: nfcd-binder-plugin
#Requires: nfcd-pn54x-plugin

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

# Splash screen
Requires: yamuisplash

%description -n patterns-sailfish-device-adaptation-pdx225
Pattern with packages for pdx225 HW Adaptation

%files -n patterns-sailfish-device-adaptation-pdx225
