%define device pdx225
%define rpm_device xqcc54

%define device_pretty Xperia 10 IV

# Community HW adaptations need this
#define community_adaptation 1

%define pixel_ratio 1.75

# Ignore requirements of included binaries
%define __requires_exclude_from ^/opt/appsupport/vendor/lib.*/.*$

%include droid-config-common.inc
%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-pdx225.inc
%include patterns/patterns-sailfish-device-configuration-xqcc54.inc
