#!/usr/bin/bash

i=1

while [[ $i -le 10 ]]
do
    echo "$i: hello world"
    i=$((i+1))
done

echo "==========================="

j=1
while ((j<10))
do
    echo "$j: why are you runniggggg!"
    j=$((j+1))
done