#!/usr/bin/bash

read -p "a: " a
read -p "b: " b

sum=0
for ((i=a; i<=b; i++))
do
    sum=$((sum+i))
done

echo "a to b, sum = $sum"
