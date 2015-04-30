#!/bin/zsh

env LD_PRELOAD="liblttng-ust-dl.so" LD_LIBRARY_PATH="." ./main.out
