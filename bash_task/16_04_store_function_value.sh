#!/usr/bin/bash

usr_details(){
    name=$1
    age=$2
    email=$3

    details="Name: $name\nAge: $age\nemail: $email"

    echo -e "$details"
}

person_details=$(usr_details "siyam hossain" 21 "siyam.cybersoul@gmail.com")

echo "$person_details"