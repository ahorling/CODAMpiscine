#!/bin/bash
ifconfig -a link | grep ether | sed 's/'ether' //g' | awk '{$1=$1;print}'
