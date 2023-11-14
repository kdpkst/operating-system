#!/bin/bash
function getsum() {
	echo $[$NUM1+$NUM2]
}

read -p "input the first value: " NUM1
read -p "input the second value: " NUM2
getsum $NUM1 $NUM2
