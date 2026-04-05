#!/usr/bin/bash

read -p "radius: " r
pi=3.1416

# for integer arithmetic we can use (())
# but for floating point we need use ()

area=$(echo "$pi*$r^2" | bc -l)
echo "circle area is: $area"