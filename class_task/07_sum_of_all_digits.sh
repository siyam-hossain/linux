#!/usr/bin/bash

read -p "Enter a number: " num


reverse_number=0

sum=0

while ((num > 0))
do
    digit=$((num%10))
    sum=$((sum+digit))
    num=$((num/10))
done

echo "sum of all digit: $sum"