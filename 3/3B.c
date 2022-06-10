// Program to illustrate the use the do while loop

// Include header files
#include <stdio.h>

// Function to print factorial of a number using do while loop
int factorial(int n)
{
    // Declare variables
    int fact = 1;
    // Loop to calculate factorial of a number
    do
    {
        fact *= n;
        n--;
    } while (n > 0);
    // Return factorial
    return fact;
}

// Main function
int main()
{
    // Declare variables
    int n;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);
    // Print factorial of a number
    printf("Factorial of %d is %d\n", n, factorial(n));
    // Return 0
    return 0;
}