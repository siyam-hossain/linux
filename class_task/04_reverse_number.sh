#!/usr/bin/bash

# 2005 

read -p "Enter a number: " num


reverse_number=0

while ((num > 0))
do
    digit=$((num%10))
    reverse_number=$((reverse_number*10+digit))
    num=$((num/10))
done

echo $reverse_number
