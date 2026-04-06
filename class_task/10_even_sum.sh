#!/usr/bin/bash

read -p "n: " n

sum=0
for ((i=1; i<=n ; i++))
do
    sum=$((sum+i))
done

echo "a to $n sum:  $sum"