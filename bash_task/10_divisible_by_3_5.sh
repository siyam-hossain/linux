#!/usr/bin/bash

read -p "Enter a number: " num

rem1=$((num%3))
rem2=$((num%5))


if [[ $rem1 -eq 0 && $rem2 -eq 0 ]]
then
    echo "yes"
else
    echo "no"
fi