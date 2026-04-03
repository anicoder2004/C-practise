#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * Function to validate and parse the input.
 * If the input is not a valid number (int or double), 
 * it prints an error and terminates the program.
 */
double get_validated_input(int count) {
    char buffer[100];
    char *endptr;

    printf("Enter number %d: ", count);
    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error: Failed to read input.\n");
    }

    // Convert string to double
    double value = strtod(buffer, &endptr);

    // Check if conversion happened and if there are trailing invalid characters
    if (endptr == buffer || (*endptr != '\n' && *endptr != '\0')) {
        printf("Error: Invalid input detected. Only Numbers are allowed.\n"); 
        exit(EXIT_FAILURE);
    }

    return value;
}

int main() {
    double a, b, c, max;

    printf("--- Largest of Three Numbers ---\n");

    a = get_validated_input(1);
    b = get_validated_input(2);
    c = get_validated_input(3);

    printf("\n");

    if (a == b && b == c) { printf("All three numbers are equal: %g\n",a); }

    else if (a == b && a > c) { printf("The largest number is %g (two same numbers)\n",a); }
    else if (a == c && a > b) { printf("The largest number is %g (two same numbers)\n",a); }
    else if (b == c && b > a) { printf("The largest number is %g (two same numbers)\n",b); }
    
    else if (a > b && a > c) { printf("The largest number is: %g\n", a); }
    else if (b > a && b > c) { printf("The largest number is: %g\n", b); }
    else { printf("The largest number is: %g\n", c); }
 
    return 0;
}
