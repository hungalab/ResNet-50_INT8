#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/asap_jupiter/yasu/workspace1/resnet50/hls/resnet50_2/solution1/.autopilot/db/a.g.bc ${1+"$@"}
