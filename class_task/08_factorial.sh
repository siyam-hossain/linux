#!/usr/bin/bash

factorial(){
    n=$1
    if ((n<=1))
    then
        echo 1
    else
        rec=$(factorial $((n-1)))
        res=$((n*rec))

        echo $res
    fi
}

factorial 5