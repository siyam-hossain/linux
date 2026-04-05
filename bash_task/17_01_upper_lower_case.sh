#!/usr/bin/bash

read -p "Enter a string: " str



# ========(old way)============
lowercase=$(echo "$str" | tr 'A-Z' 'a-z')
echo "old version: $lowercase"

# ==========(new version)=================
lowercase=${str,,}
echo "lowercaes: $lowercase"

uppercase=${str^^}
echo "uppercase: $uppercase"