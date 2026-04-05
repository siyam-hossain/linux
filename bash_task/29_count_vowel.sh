#!/usr/bin/bash

read -p "Enter a string: " string

echo ${string:1:1}
 
length=${#string}

echo "length: $length"

# converting lowercase first
string=${string,,}
echo $string


count=0
for ((i=0; i<length; i++))
do
    ch=${string:i:1}
    
    if [[ "$ch" == "a" || "$ch" == "e" || "$ch" == "i" || "$ch" == "o" || "$ch" == "u" ]]
    then
        count=$((count+1))
    fi
done

echo "vowel count: $count"