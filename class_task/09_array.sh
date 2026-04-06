#!/usr/bin/bash

read -p "Enter your number: " num

a=(1 2 3 4  5 6)

flag=0

for ((i=0; i<${#a[@]}; i++))
do
    if ((num == a[i]))
    then
        flag=1
        break
    fi
done

if ((flag == 0))
then
    echo "Not found"
else
    echo "Found"
fi