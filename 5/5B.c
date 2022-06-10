// Program to illustrate passing a array as an argument to a function

// Include the header file
#include <stdio.h>

// Function to print the array
void print_array(int *arr, int size)
{
    // Loop to print the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // Print new line
    printf("\n");
}

// Function to find the sum of array
int sum_array(int *arr, int size)
{
    // Declare variables
    int sum = 0;
    // Loop to find the sum of array
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    // Return sum
    return sum;
}

// Main function
int main()
{
    // Declare variables
    int arr[100];
    int size;
    // Input the size of array
    printf("Enter the size of array: ");
    scanf("%d", &size);
    // Input the elements of array
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    print_array(arr, size);   // Function call to print the array
    // Print the sum of array
    printf("Sum of the array is: %d\n", sum_array(arr, size)); // Function call to find the sum of array
    // Return 0
    return 0;
}