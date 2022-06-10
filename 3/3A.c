// Program to calulate sum of first 10 numbers

// Include header files
#include <stdio.h>

// Function to calculate sum of first 10 numbers
int sum_first_10()
{
    // Declare variables
    int sum = 0;
    // Loop to calculate sum of first 10 numbers
    for (int i = 1; i <= 10; i++)
        sum += i;
    // Return sum
    return sum;
}

// Main function
int main()
{
    // Print sum of first 10 numbers
    printf("Sum of first 10 numbers: %d\n", sum_first_10());
    // Return 0
    return 0;
}