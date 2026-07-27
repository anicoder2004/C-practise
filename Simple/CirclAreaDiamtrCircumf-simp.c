#include <stdio.h>

#define PI 3.14159265359

int main() {
    double radius, diameter, circumference, area;

    char extra;

    // %c tries to read whatever character directly follows the number
    // Ask the user for the radius
    
    printf("Enter the radius of the circle: ");
    if (scanf("%lf%c", &radius, &extra) != 2 || extra != '\n' || radius < 0) {
        printf("Invalid input. Please enter numbers only.\n");
        return 1;
    }
 
    // Perform calculations

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Display the results (rounded to 3 decimal places)

    printf("\n--- Results ---\n");
    printf("Diameter:      %.3lf\n", diameter);
    printf("Circumference: %.3lf\n", circumference);
    printf("Area:          %.3lf\n", area);

    return 0;
}