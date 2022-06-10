// Program to illustrate the use of array

// Include header files
#include <stdio.h>

// Function to print the elements of an array
void print_array(int arr[], int size)
{
    // Loop to print the elements of an array
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main()
{
    // Declare variables
    int arr[5] = {1, 2, 3, 4, 5};
    // Print the elements of an array
    print_array(arr, 5);
    // Return 0
    return 0;
}