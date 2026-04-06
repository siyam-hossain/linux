#!/usr/bin/bash

read -p "n: " n

l1=0
l2=1

fib=0

for ((i=0; i<n; i++))
do
    echo -n "$l1 "
    fib=$((l1+l2))

    l2=$l1
    l1=$fib
done
echo ""
    
