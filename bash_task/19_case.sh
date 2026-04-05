#!/usr/bin/bash

read -p "Enter a number: " n

case $n in
    1) echo "one";;
    2) echo "two";;
    *) echo "other";;
esac