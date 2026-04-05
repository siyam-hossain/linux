#!/usr/bin/bash

sum(){
    a=$1
    b=$2

    echo $((a+b))
}

res=$(sum 1 2)
echo "result: $res"


res=$(sum 100 587)
echo "result: $res"