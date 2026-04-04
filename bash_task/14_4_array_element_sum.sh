#!/usr/bin/bash

read -p "Enter array size: " size

arr=()

for ((i=0; i<size; i++))
do
    read -p "$i index values: " arr[i]
done

echo "${arr[@]}"

sum=0

for ((j=0; j<${#arr[@]}; j++))
do
    sum=$((sum+arr[j]))
done

echo "array summation: $sum"