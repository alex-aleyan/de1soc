#!/bin/sh

#sopc-create-header-files "./soc_system.sopcinfo" #\
#                         --single hps_0.h \
#                         --module hps_0

sopc-create-header-files "*.sopcinfo" --single hps_0_arm_a9_0.h --module hps_0_arm_a9_0
