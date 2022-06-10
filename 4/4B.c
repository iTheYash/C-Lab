// Program to store elements in a 2 dimensional array

// Include header files
#include <stdio.h>

// Function to print the elements of a 2 dimensional array
void print_array(int arr[][3], int size)
{
    // Loop to print the elements of a 2 dimensional array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// Main function
int main()
{
    // Declare variables
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Print the elements of a 2 dimensional array
    print_array(arr, 3);
    // Return 0
    return 0;
}