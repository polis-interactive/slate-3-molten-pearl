#!/bin/bash

echo "Starting window manager"

sleep 1
systemctl stop nymea-networkmanager.service
sleep 1
systemctl start nymea-networkmanager.service
xvfb-run /home/pi/slate-3/main