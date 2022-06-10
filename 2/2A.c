// Program to find whether input number is even or odd

// Include header files
#include <stdio.h>

// Function to find whether input number is even or odd
int is_even(int n)
{
    // If input number is even, return 1
    if (n % 2 == 0)
        return 1;
    // If input number is odd, return 0
    else
        return 0;
}

// Main function
int main()
{
    // Declare variables
    int n;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);
    // Print whether input number is even or odd
    if (is_even(n))
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    // Return 0
    return 0;
}