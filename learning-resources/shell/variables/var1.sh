#!/bin/bash 
#define variable A
A=100
#output A
echo A=$A
echo "A=$A"
#discard variable A
unset A
echo A=$A
#declare a static variable B, which cannot be discarded in shell
readonly B=200
echo B=$B
unset B
