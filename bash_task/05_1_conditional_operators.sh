#!/usr/bin/bash

read -p "a: " a
read -p "b: " b

# remember [[--space--condition---space--]]
if [[ $a -eq $b ]]
then
    echo "a = b"
fi

echo "================================="
if [[ $a -eq $b ]]
then
    echo "a = b"

elif [[ $a > $b ]]
then 
    echo "a > b"
else
    echo "a < b"
fi


# (()) use for arithmetic operation
# inside we can't use -eq

# if ((a -eq b))
# then
#     echo "a = b"
# fi