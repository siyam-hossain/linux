#!/usr/bin/bash

arr=(5 1 2 3 12 0 55 4)

echo "${#arr[@]}"


# l1=0
# l2=0

l1=l2=0

for ((i=0; i<${#arr[@]}; i++))
do
    echo -n "${arr[i]} "

    if (( l1<${arr[i]} ))
    then
        temp=$l1

        l1=${arr[i]}

        l2=$temp
    fi
done
echo -e "\n$l1 $l2"