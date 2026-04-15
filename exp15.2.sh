#!/bin/bash

# Take input from user
echo "Enter first number:"
read a

echo "Enter second number:"
read b

# Addition
sum=$((a + b))

# Subtraction
sub=$((a - b))

# Multiplication
mul=$((a * b))

# Display results
echo "Addition: $sum"
echo "Subtraction: $sub"
echo "Multiplication: $mul"
