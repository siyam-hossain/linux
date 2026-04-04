#!/usr/bin/bash

read -p "Enter your array size: " n

arr=()

for ((i = 0; i<n; i++))
do
    read -p "$i index value: " value
    arr[i]=$value;
done

echo "array: ${arr[@]}"