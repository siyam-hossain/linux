#!/usr/bin/bash

for ((i=1; i<=10; i++))
do
    echo -n "$i "
    
    if [[ $i -eq 10 ]]
    then
        echo ""
    fi
done


# with range

for i in {1..10}
do
    echo -n "$i "
done
echo ""


# --------(break / continue)--------------
for k in {5..15}
do
    if [[ $k == 9 ]]
    then
        echo -n "(9 skip) "
        continue
    elif [[ $k == 13 ]]
    then
        echo -n "(13 break) "
        break
    else
        echo -n "$k "
    fi
done

echo ""