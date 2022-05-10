#!/bin/bash
wget -O /tmp/injector.so https://github.com/IperEnma/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/injector.so?raw=true
export LD_PRELOAD=/tmp/injector.so
