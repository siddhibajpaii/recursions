Aim: To study and implement recursions in C++

#Program a: The given C++ program calculates the factorial of a non-negative integer using a recursive function named factorial. The function takes an integer n as input and checks if n is 0 or 1, which are the base cases; in these cases, it returns 1 since the factorial of 0 and 1 is 1. For other values of n, the function calls itself with n-1 and multiplies the result by n, effectively breaking down the problem into smaller subproblems. The main function prompts the user to enter a non-negative integer and handles invalid input by printing an error message for negative numbers. For valid input, it calls the recursive factorial function and prints the computed factorial. The use of unsigned long long allows the program to handle relatively large factorial values, although extremely large inputs might exceed this limit. Overall, the code demonstrates a clean and straightforward implementation of recursion for factorial calculation with input validation.

Algoithm:

    Step-1: Start
    Step-2: Read the integer value n from the user
    Step-3: Check if n is less than 0
    Step-4: If yes, display the message: "Factorial is not defined for negative numbers" and stop
    Step-5: Define a recursive function factorial(n) as follows:
    Step-6: If n is 0 or 1, return 1 (base case)
    Step-7: Else, return n * factorial(n - 1) (recursive case)
    Step-8: Call the function factorial(n) and store the result
    Step-9: Display the factorial value returned by the function
    Step-10: End.

#Program b: The given C++ program calculates the sum of all integers from 1 up to a user-entered non-negative integer using recursion. The recursive function sum takes an integer n as input and checks if it is 0, which is the base case, returning 0 in that case. For any other positive integer n, the function returns n plus the result of calling itself with n - 1. This effectively breaks down the problem into smaller subproblems, summing each number until it reaches 0. In the main function, the program prompts the user to input a number and validates that it is non-negative. If valid, it calls the recursive sum function and prints the resulting sum. This recursive approach demonstrates a simple and intuitive method to calculate the sum of natural numbers by breaking down the problem into smaller parts until the base case is reached.

Algorithm:

    Step-1: Start
    Step-2: Read integer n from user
    Step-3: Check if n is negative
    Step-4: If yes, print "Please enter a non-negative number." and stop
    Step-5: Define recursive function sum(n) as:
    Step-6: If n == 0, return 0 (base case)
    Step-7: Else, return n + sum(n - 1) (recursive case)
    Step-8: Call the function sum(n) and store the result
    Step-9: Print the result as the sum from 1 to n
    Step-10: End.

#Program c: The given C++ program prints a string in reverse using recursion. The recursive function printReverse takes the string and an index as parameters. It starts printing from the last character (index = length - 1) and moves backward by recursively calling itself with the index decremented by 1. The base case occurs when the index is less than 0, at which point the recursion stops. This method effectively reverses the string by printing characters from the end to the beginning. The main function reads a full line of input from the user using getline, then calls printReverse with the last character’s index. This approach demonstrates a simple use of recursion to traverse and process a string in reverse order without creating any additional strings or arrays.

Algorithm:

    Step-1: Start
    Step-2: Read the input string str from the user
    Step-3: Define a recursive function printReverse(str, index):
    Step-4: If index < 0, return (base case - stop recursion)
    Step-5: Otherwise: Print the character str[index]
    Step-6: Call printReverse(str, index - 1) recursively to print the previous character
    Step-7: Call printReverse(str, str.length() - 1) to start printing from the last character
    Step-8: End.

#Program d: This C++ program reverses a positive integer using recursion. The core logic is implemented in the function reverseNumber, which takes two arguments: the number n to be reversed, and an accumulator rev (defaulted to 0) that builds the reversed number step by step. In each recursive call, the last digit of n (n % 10) is added to rev after shifting rev left by one decimal place (rev * 10). The number n is then reduced by removing the last digit (n / 10), and the function continues until n becomes 0. This is the base case where the function returns the fully reversed number. The main function handles user input, checks for negative values, and prints the final reversed number. This recursive approach is efficient for reversing integers and avoids using string conversions or loops.

Algorithm:

    Step-1: Start
    Step-2: Read the integer n from the user
    Step-3: Check if n is negative: If yes, display a message and stop
    Step-4: Define a recursive function reverseNumber(n, rev):
    Step-5: If n == 0, return rev (base case)
    Step-6: Else: Extract last digit: digit = n % 10
    Step-7: Update rev = rev * 10 + digit
    Step-8: Call reverseNumber(n / 10, rev)
    Step-9: Call the function reverseNumber(n, 0) from main and store the result
    Step-10: Display the reversed number
    Step-11: End.

