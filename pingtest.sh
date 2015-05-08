#!/bin/sh

lttng create
lttng enable-event -k -a
lttng start
ping 8.8.8.8 -c 10
ping6 localhost -c 10
lttng stop
lttng destroy
