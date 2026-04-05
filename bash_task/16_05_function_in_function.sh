#!/usr/bin/bash

output(){
    echo $1
}

add(){
    a=$2
    b=$3

    addition=$((a+b))
    output $addition
}

res=$(add 4 5)
echo "Result: $res"