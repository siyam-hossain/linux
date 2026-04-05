#!/usr/bin/bash

read -p "Enter a number: " num

t1=0
t2=1

for ((i=1; i<=5; i++))
do
    echo -n "$t1 "
    next=$((t1+t2))
    t1=$t2
    t2=$next
done
echo
