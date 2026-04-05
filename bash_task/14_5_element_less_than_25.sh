#!/usr/bin/bash


read -p "Enter array size: " size
arr=()

for((i=0; i<size; i++))
do
    read -p "$i index value: " arr[i]
done

count=0

for((i=0; i<${#arr[@]}; i++))
do
    if ((arr[i]>=25))
    then
        continue
    fi
    count=$((count+1))
done

echo "total number that less than 25: $count"