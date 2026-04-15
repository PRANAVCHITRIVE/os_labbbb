#!/bin/bash
echo "Enter the option"
echo "a=print the date"
echo "b=list of all current directories"
read choice
case $choice in
a) date;;
b) ls;;
*) Not a valid option
esac
