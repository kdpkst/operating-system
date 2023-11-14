#!/bin/bash
for i in "$*"
do
	echo num is $i
done
# 
for i in "$@"
do
	echo num is $i
done
