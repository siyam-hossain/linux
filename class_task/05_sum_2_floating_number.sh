#!/usr/bin/bash

read -p "float 1: " f1
read -p "float 2: " f2

echo "$f1+$f2" | bc -l