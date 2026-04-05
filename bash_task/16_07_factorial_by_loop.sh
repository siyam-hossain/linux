#!/usr/bin/bash

read -p "n: " n

fac=1

for ((i=n; i>=1; i--))
do 
    fac=$((fac*i))
done

echo "factorial: $fac"
