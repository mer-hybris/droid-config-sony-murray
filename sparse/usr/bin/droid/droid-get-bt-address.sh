#!/bin/sh

# If the bluetooth address is provided by another script use that
if [ -f /var/lib/bluetooth/board-address ] ; then
    exit 0
fi

mkdir -p /var/lib/bluetooth

# Getting address file from properties
if [ "$(getprop persist.vendor.service.bdroid.bdaddr)" != "" ]; then
    echo $(getprop persist.vendor.service.bdroid.bdaddr |awk -F: '{do printf "%s"(NF>1?FS:RS),$NF;while(--NF)}') > /var/lib/bluetooth/board-address
    if [ ! -f /var/lib/bluetooth/board-address ]; then
        echo "Failed to set bluetooth address."
        exit 1
    fi
else
    echo "Failed to get bluetooth address!"
    exit 1
fi

# Set proper permissions
chown root:root /var/lib/bluetooth/board-address
chmod 644 /var/lib/bluetooth/board-address
exit 0

