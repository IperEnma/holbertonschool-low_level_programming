#!/bin/bash
wget -P /tmp https://github.com/IperEnma/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/injector.so
export LD_PRELOAD=/tmp/injector.so
