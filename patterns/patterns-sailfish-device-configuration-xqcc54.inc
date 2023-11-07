%package -n patterns-sailfish-device-configuration-xqcc54
Summary: Jolla Configuration xqcc54
Requires: patterns-sailfish-device-configuration-common-xqcc54
Requires: patterns-sailfish-device-adaptation-pdx225

Requires: droid-config-xqcc54-sailfish
Requires: droid-config-xqcc54-pulseaudio-settings
Requires: droid-config-xqcc54-policy-settings
Requires: droid-config-xqcc54-preinit-plugin
Requires: droid-config-xqcc54-flashing
Requires: droid-config-xqcc54-bluez5
Requires: droid-hal-version-xqcc54

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
# Disabled until eSIM support is added
#Requires: jolla-settings-networking-multisim

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-xqcc54
Pattern with packages for xqcc54 configurations

%files -n patterns-sailfish-device-configuration-xqcc54
