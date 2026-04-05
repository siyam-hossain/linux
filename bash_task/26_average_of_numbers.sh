#!/usr/bin/bash

read -p "a: " a
read -p "b: " b


avg=$(echo "($a+$b)/2" | bc -l)

echo "avg: $avg"
