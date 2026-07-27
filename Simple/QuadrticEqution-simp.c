// This Question came in 2022
#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");

    // Check if the input is valid numbers
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter valid numbers.\n");
        return 1;
    }

    // A quadratic equation must have a non-zero 'a' term
    if (a == 0) {
        printf("Error: 'a' cannot be 0 for a quadratic equation.\n");
        return 1;
    }

    // Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nReal and distinct roots:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\nReal and equal roots:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    // Case 3: Complex (imaginary) roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\nComplex and imaginary roots:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}