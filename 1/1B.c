// Calculate area of rectangle and circle

// Include header files
#include <stdio.h>

// Function main
int main()
{
    // Declare variables
    float length, width, area;
    float radius, circle_area;

    // Get length
    printf("Enter length: ");
    scanf("%f", &length);

    // Get width
    printf("Enter width: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Get radius
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculate circle area
    circle_area = 3.14 * radius * radius;

    // Display area
    printf("Area of rectangle is %.2f\n", area);

    // Display circle area
    printf("Area of circle is %.2f\n", circle_area);

    // Return 0
    return 0;
}