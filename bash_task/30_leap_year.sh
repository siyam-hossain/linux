#!/usr/bin/bash

read -p "Enter a year: " year

if (( (year%4 == 0 && year%100 != 0) || $year%400 == 0 ))
then
    echo "$year is Leap Year"
else
    echo "Not a leap year"
fi