#!/usr/bin/bash
arr=()
read -p "Enter size: " size

for ((i=0; i<size; i++))
do
    read arr[i]
done

echo ${arr[@]}