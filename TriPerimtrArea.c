#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double get_validated_input(const char* side_name) {
    char buffer[100];
    char *endptr;

    printf("Enter the length of side %s: ", side_name);
    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        exit(EXIT_FAILURE); }

    double value = strtod(buffer, &endptr);

    if (endptr == buffer || (*endptr != '\n' && *endptr != '\0') || value <= 0) {
        printf("\nError: Invalid input. You should enter a positive number.\n");
        exit(EXIT_FAILURE); }

    return value;
}

int main() {
    double a, b, c, peri, s, area;

    printf("--- Triangle Calculator ---\n");

    a = get_validated_input("A");
    b = get_validated_input("B");
    c = get_validated_input("C");

    // Sum of any two sides must be greater than the third side
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("\nError: These sides cannot form a triangle.\n");
        return 0; }

    peri = a+b+c;
    s = peri / 2;
    area = sqrt(s *(s - a)*(s - b)*(s - c));

    printf("\n--- Results ---\n");
    printf("Perimeter: %g\n", peri);
    printf("Area: %.3g\n", area);

    return 0;
}