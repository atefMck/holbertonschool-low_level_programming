#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/atefsama666/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libnothack.so
export LD_PRELOAD="/tmp/libnothack.so"
