#!/usr/bin/bash

add(){
    a=$1
    b=$2
    sum=$((a+b))

    return $sum
}

add 1 3
echo $?
