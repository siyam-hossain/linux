#!/usr/bin/bash

num1=10
num2=50

sum=$((num1+num2))
sum1=$(( num1+num2 ))
sum2=$(( num1 + num2 ))
sum3=$(( $num1 + $num2 ))


echo "Sum: $sum $sum1 $sum2 $sum3"


read -p "a: " a
read -p "b: " b

s=$((a+b))

echo "a + b = $s"