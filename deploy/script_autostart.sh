#!/bin/bash

# add the following to /etc/rc.local
#   exec 1>/tmp/rc.local.log 2>&1 # send stdout and stderr from rc.local to a log file
#   set -x
#   /home/pi/bin/script_autostart.sh

echo "Starting window manager"

xvfb-run /home/pi/slate-meltdown-plumber-1/main