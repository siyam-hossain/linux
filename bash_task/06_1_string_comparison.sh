#!/usr/bin/bash

s1="siyam"
s2="hossain"

# space required between if and [[]]

if [[ $s1 == "siyam" ]]
then
    echo "yes"
else
    echo "no"
fi


read -p "string 1: " str1
read -p "string 2: " str2

if [[ $str1 == $str2 ]]
then
    echo "yes"
else
    echo "no"
fi
