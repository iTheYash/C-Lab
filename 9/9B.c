// Program to access elements of a string with pointers

// Include the header file
#include <stdio.h>

// Function to access elements of a string with pointers
void access_string(char *str)
{
    // Access the elements of string
    printf("\nThe elements of string are:\n");
    printf("%c", *str);
    printf("%c", *(str + 1));
    printf("%c", *(str + 2));
    printf("%c", *(str + 3));
}

// Main function
int main()
{
    // Declare variables
    char str[] = "Hello";
    // Access the elements of string
    access_string(str);
    // Return 0
    return 0;
}