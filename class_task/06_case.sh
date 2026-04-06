#!/usr/bin/bash

read -p "Enter your choice: " choice

addition(){
    read -p "a: " a
    read -p "b: " b

    sum=$((a+b))
    echo "addition: $sum"
}
subtraction(){
    read -p "a: " a
    read -p "b: " b

    sub=$((a-b))
    echo "subtraction: $sub"
}
multiplication(){
    read -p "a: " a
    read -p "b: " b

    mul=$((a*b))
    echo "multiplication: $mul"
}
divition(){
    read -p "a: " a
    read -p "b: " b

    echo -n "divition: "
    echo "$a/$b" | bc -l
}


case $choice in
    1) addition;;
    2) subtraction;;
    3) multiplication;;
    4) divition;;
    *) echo "Exit";;

esac

