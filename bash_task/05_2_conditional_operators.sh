#!/usr/bin/bash

read -p "Enter two numbers: " num1 num2

sum=$((num1+num2))

if(($sum > 10))
then
    echo "sum > 10"
elif(($sum < 10))
then
    echo "sum < 10"
else
    echo "sum = 10"
fi