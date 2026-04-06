#!/usr/bin/bash

read -p "a: " a
read -p "b: " b
read -p "c: " c

if ((a > b))
then
    if ((a > c))
    then
        echo "a greater than b,c"
    else
        echo "c greater than a,b"
    fi
else
    if (( b > c))
    then
        echo "b greater than a,c"
    else
        echo "c graeter than a,b"
    fi
fi