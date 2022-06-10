// Program to illustrate Accessing Union Members in C

// Include the header file
#include <stdio.h>

// Union to print given data in different formats
union data
{
    int i;
    float f;
    char c;
};

// Main function
int main()
{
    // Declare variables
    union data d;
    // Give the data
    d.i = 10;
    d.f = 20.5;
    d.c = 'A';
    // Print the data
    printf("\nThe data in different formats:\n");
    printf("Integer: %d\n", d.i);
    printf("Float: %f\n", d.f);
    printf("Character: %c\n", d.c);
    // Return 0
    return 0;
}