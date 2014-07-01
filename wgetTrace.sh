#!/bin/zsh

lttng create
lttng enable-event -k -a
lttng start
wget http://mirror.csclub.uwaterloo.ca/archlinux/iso/2014.05.01/archlinux-2014.05.01-dual.iso&
pid=$!
sleep 15
kill $pid
lttng stop
lttng destroy
rm archlinux-2014.05.01-dual.iso
