#!/usr/bin/bash

read -p "a: " a
read -p "b: " b

sum=0

while ((a<=b))
do
    sum=$((sum+a))
    a=$((a+1))
done

echo "a to b, sum = $sum"