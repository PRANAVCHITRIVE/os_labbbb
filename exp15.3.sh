#!/bin/bash

while true
do
    echo "----------------------------"
    echo "1. Check Leap Year"
    echo "2. Largest of Two Numbers"
    echo "3. Odd or Even"
    echo "4. Exit"
    echo "----------------------------"
    echo "Enter your choice:"
    read choice

    case $choice in
        1)
            echo "Enter a year:"
            read year

            if (( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ))
            then
                echo "$year is a Leap Year"
            else
                echo "$year is not a Leap Year"
            fi
            ;;

        2)
            echo "Enter first number:"
            read a

            echo "Enter second number:"
            read b

            if (( a > b ))
            then
                echo "$a is greater than $b"
            elif (( a < b ))
            then
                echo "$b is greater than $a"
            else
                echo "Both numbers are equal"
                  fi
            ;;

 3)
            echo "Enter a number:"
            read num

            if (( num % 2 == 0 ))
            then
                echo "$num is Even"
            else
                echo "$num is Odd"
            fi
            ;;

        4)
            echo "Exiting program..."
            break
            ;;
#!/bin/bash

while true
do
    echo "----------------------------"
    echo "1. Check Leap Year"
    echo "2. Largest of Two Numbers"
    echo "3. Odd or Even"
    echo "4. Exit"
    echo "----------------------------"
    echo "Enter your choice:"
    read choice

    case $choice in
#!/bin/bash

while true
do
    echo "----------------------------"
    echo "1. Check Leap Year"
    echo "2. Largest of Two Numbers"
    echo "3. Odd or Even"
    echo "4. Exit"
    echo "----------------------------"
    echo "Enter your choice:"
    read choice
case $choice in
        1)
            echo "Enter a year:"
            read year

            if (( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ))
            then
                echo "$year is a Leap Year"
            else
                echo "$year is not a Leap Year"
            fi
            ;;

        2)
            echo "Enter first number:"
            read a

            echo "Enter second number:"
            read b

            if (( a > b ))
            then
                echo "$a is greater than $b"
            elif (( a < b ))
            then
                echo "$b is greater than $a"
1)
            echo "Enter a year:"
            read year

            if (( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ))
            then
                echo "$year is a Leap Year"
            else
                echo "$year is not a Leap Year"
            fi
            ;;

        2)
            echo "Enter first number:"
            read a

            echo "Enter second number:"
            read b

            if (( a > b ))
            then
                echo "$a is greater than $b"
            elif (( a < b ))
            then
                echo "$b is greater than $a"
        *)
            echo "Invalid choice! Please try again."
            ;;
    esac
done

