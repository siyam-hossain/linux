#!/usr/bin/bash

read -p "Enter a number: " num

for((i=1; i<=10; i++))
do
    echo "$i X $num : $((i*num))"
done







