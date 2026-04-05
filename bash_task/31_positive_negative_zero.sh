#!/usr/bin/bash

read -p "Enter a number: " num

if ((num < 0))
then
    echo "Negative"
elif ((num > 0))
then
    echo "Positive"
else
    echo "Zero"
fi