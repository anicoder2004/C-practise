#include <stdio.h>
#include <stdlib.h>

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

    printf("--- Lowest of Three Numbers ---\n");

    a = get_validated_input(1);
    b = get_validated_input(2);
    c = get_validated_input(3);

    printf("\n");

    if (a == b && b == c) { printf("All three numbers are equal: %g\n",a); }

    else if (a == b && a < c) { printf("The lowest number is %g (two same numbers)\n",a); }
    else if (a == c && a < b) { printf("The lowest number is %g (two same numbers)\n",a); }
    else if (b == c && b < a) { printf("The lowest number is %g (two same numbers)\n",b); }
    
    else if (a < b && a < c) { printf("The lowest number is: %g\n", a); }
    else if (b < a && b < c) { printf("The lowest number is: %g\n", b); }
    else { printf("The lowest number is: %g\n", c); }
 
    return 0;
}
