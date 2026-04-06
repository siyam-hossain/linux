#!/usr/bin/bash

read -p "n: " n


flag=0

for ((i=2; i<n; i++))
do
   
    if ((n == 2))
    then
        echo "prime number"
    
    elif ((n%i == 0))
    then 
        echo "Not a prime number"
        flag=1
        break
    fi

done

if ((flag == 0))
then
    echo "prime number"
fi


# if (($n%2==0))