#!/usr/bin/bash

str="Southeast versity"

echo "${str:0:9}"

full_string=${str:0:10}Uni${str:10}

echo $full_string