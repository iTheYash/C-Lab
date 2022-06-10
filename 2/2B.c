// Program to illustrate the use of switch statement

// Include header files
#include <stdio.h>

// Function to print the day of the week    
void print_day(int day)
{
    // Switch statement to print the day of the week
    switch (day)
    {
        // If input day is 1, print Monday
        case 1:
            printf("Monday\n");
            break;
        // If input day is 2, print Tuesday
        case 2:
            printf("Tuesday\n");
            break;
        // If input day is 3, print Wednesday
        case 3:
            printf("Wednesday\n");
            break;
        // If input day is 4, print Thursday
        case 4:
            printf("Thursday\n");
            break;
        // If input day is 5, print Friday
        case 5:
            printf("Friday\n");
            break;
        // If input day is 6, print Saturday
        case 6:
            printf("Saturday\n");
            break;
        // If input day is 7, print Sunday
        case 7:
            printf("Sunday\n");
            break;
        // If input day is not 1-7, print invalid day
        default:
            printf("Invalid day\n");
            break;
    }
}

// Main function
int main()
{
    // Declare variables
    int day;
    // Input day
    printf("Enter a day: ");
    scanf("%d", &day);
    // Print the day of the week
    print_day(day);
    // Return 0
    return 0;
}