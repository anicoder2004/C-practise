// This Question came in 2022
#include <stdio.h>

int main() {
    double a, b, c, smallest;

    printf("Enter three double numbers (separated by space): ");

    // Validate that three valid numbers were entered
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three valid numbers.\n");
        return 1;
    }

    printf("\n");

    // Logic to find the smallest number

    if (a == b && b == c) { printf("All three numbers are equal: %g\n",a); }

    else if (a == b && a < c) { printf("The lowest number is %g (two same numbers)\n",a); }
    else if (a == c && a < b) { printf("The lowest number is %g (two same numbers)\n",a); }
    else if (b == c && b < a) { printf("The lowest number is %g (two same numbers)\n",b); }
    
    else if (a < b && a < c) { printf("The lowest number is: %g\n", a); }
    else if (b < a && b < c) { printf("The lowest number is: %g\n", b); }
    else { printf("The lowest number is: %g\n", c); }

    printf("The smallest number is: %.2lf\n", smallest);

    return 0;
}