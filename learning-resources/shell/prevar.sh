#!/bin/bash
echo "id of the current process=$$"
./position.sh &
echo "id of the last process running in the background=$!"
echo "the execution result=$?"
