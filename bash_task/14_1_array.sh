#!/usr/bin/bash

arr=(10 20 35 49 57)

# extract specific value
echo "3 index value: ${arr[2]}"

# array length
echo "array length: ${#arr[@]}"

# extract full array
echo -n "array: "
for ((i=0; i<${#arr[@]}; i++))
do
    echo -n "${arr[i]} "
done

echo ""