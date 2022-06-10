// Program to illustrate defining a structure

// Include the header file
#include <stdio.h>

// Structure to store the details of a student
struct student
{
    // Declare variables
    char name[100];
    int age;
    char address[100];
    char phone[100];
};

// Function to print the details of a student
void print_student(struct student s)
{
    // Print the details of student
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Address: %s\n", s.address);
    printf("Phone: %s\n", s.phone);
}

// Main function
int main()
{
    // Declare variables
    struct student s;
    // Input the details of student
    printf("Enter the details of student:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Age: ");
    scanf("%d", &s.age);
    printf("Address: ");
    scanf("%s", s.address);
    printf("Phone: ");
    scanf("%s", s.phone);
    // Print the details of student
    printf("\nStudent details:\n");
    print_student(s);
    // Return 0
    return 0;
}