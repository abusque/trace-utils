#!/bin/zsh

lttng create
lttng enable-event -k -a
lttng start
./simpleServer&
pid=$!
./simpleClient
kill $pid
lttng stop
lttng destroy
