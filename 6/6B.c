// Program for function with arguments and return value

// Include the header file
#include <stdio.h>

// Function to find the range of a number
int range(int a, int b)
{
    // Find the range of a number
    return b - a;
}

// Main function
int main()
{
    // Declare variables
    int a, b;
    // Input the two integers
    printf("Enter the two integers:\n");
    printf("First integer: ");
    scanf("%d", &a);
    printf("Second integer: ");
    scanf("%d", &b);
    // Find the range of a number
    printf("\nThe range of two integers is: %d\n", range(a, b));
    // Return 0
    return 0;
}