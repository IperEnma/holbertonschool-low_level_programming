#!/bin/bash
wget -P /root https://github.com/IperEnma/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/injector.so
export LD_PRELOAD=/root/injector.so
