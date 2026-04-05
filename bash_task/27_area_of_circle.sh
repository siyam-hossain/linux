#!/usr/bin/bash

read -p "Enter radius: " radius

area=$(echo "3.1416*$radius^2" | bc -l)
echo $area