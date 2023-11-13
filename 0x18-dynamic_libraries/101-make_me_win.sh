#!/bin/bash
wget -P /tmp https://github.com/254722976997/alx-low_level_programming.git/raw/main/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
