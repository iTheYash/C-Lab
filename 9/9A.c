// Program to add and substract integers from pointers

// Include the header file
#include <stdio.h>

// Function to add two integers
int add(int *a, int *b)
{
    // Add the two integers
    return *a + *b;
}

// Function to subtract two integers
int subtract(int *a, int *b)
{
    // Subtract the two integers
    return *a - *b;
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
    // Add the two integers
    printf("\nThe sum of two integers is: %d\n", add(&a, &b));
    // Subtract the two integers
    printf("\nThe difference of two integers is: %d\n", subtract(&a, &b));
    // Return 0
    return 0;
}