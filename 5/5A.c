// To find the length of string

// Include header files
#include <stdio.h>

// Function to find the length of input string
int find_length(char *str)
{
    // Declare variables
    int length = 0;
    // Loop to find the length of input string
    while (*str != '\0')
    {
        length++;
        str++;
    }
    // Return length
    return length;
}

// Main function
int main()
{
    // Declare variables
    char str[100];
    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    // Print the length of string
    printf("Length of the string is: %d\n", find_length(str));
    // Return 0
    return 0;
}