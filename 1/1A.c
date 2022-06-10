// Calculate sum of 4 numbers

// Include header files
#include <stdio.h>

// Function main
int main()
{
    // Declare variables
    int a, b, c, d;
    int sum;

    // Get numer 1
    printf("Enter number 1: ");
    scanf("%d", &a);

    // Get number 2
    printf("Enter number 2: ");
    scanf("%d", &b);

    // Get number 3
    printf("Enter number 3: ");
    scanf("%d", &c);

    // Get number 4
    printf("Enter number 4: ");
    scanf("%d", &d);

    // Calculate sum
    sum = a + b + c + d;

    // Display sum
    printf("Sum of 4 numbers is %d\n", sum);

    // Return 0
    return 0;
}