// Recursion: Program to find factorial of a number accepted by user

// Include the header file
#include <stdio.h>

// Function to find factorial of a number
int factorial(int n)
{
    // If n is 1, return 1
    if (n == 1)
    {
        return 1;
    }
    // Else, return n * factorial(n - 1)
    else
    {
        return n * factorial(n - 1);
    }
}

// Main function
int main()
{
    // Declare variables
    int n;
    // Input the number
    printf("Enter the number: ");
    scanf("%d", &n);
    // Print the factorial of the number
    printf("Factorial of %d is: %d\n", n, factorial(n));
    // Return 0
    return 0;
}