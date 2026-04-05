// This Code is to measure Area, Diameter and Circumference/Perimeter of a Circle

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double get_validated_input(const char* label) {
    char buffer[100];
    char *endptr;
    double value;

    while (1) {    
        printf("Enter the circle %s: ", label);
    
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error: System failed to read input. Exiting...\n");
            exit(EXIT_FAILURE); }

        value = strtod(buffer, &endptr);

        if (endptr == buffer || (*endptr != '\n' && *endptr != '\0') || value <= 0) {
            printf("Error: Invalid input. Enter positive number only.\n\n");
            continue; }

        break; 
    }

    return value;
}

int main() {
    double radius, diamtr, circumf, area;

    printf("--- Circle Details ---\n");

    radius = get_validated_input("radius");

    diamtr = 2*radius;
    circumf = 2*M_PI*radius;
    area = M_PI*pow(radius, 2); // power, 2-> square, 3-> cube

    printf("\nDiameter: %.3g\n", diamtr);
    printf("Circumference: %.3g\n", circumf);
    printf("Area: %.3g\n", area);

    return 0;
}