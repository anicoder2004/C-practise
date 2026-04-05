//This Code is to Measure GCD[Greatest Common Divisor/ go.sa.gu] of Three Numbers

#include <stdio.h>
#include <stdlib.h>

long long get_validated_int(const char* label) {
    char buffer[100];
    char *endptr;
    long long value;

 while (1) {
    printf("Enter %s: ", label);
    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error: System failed to read input. Exiting...\n");
        exit(EXIT_FAILURE); }

    value = strtoll(buffer, &endptr, 10);

    // 1. Must be a number (endptr != buffer)
    // 2. Must not have decimals (endptr must point to newline)
    if (endptr == buffer || (*endptr != '\n' && *endptr != '\0')) {
        printf("\nError: Invalid input. Please enter a whole number only.\n\n");
        continue; }

    else if (value<0) {
        printf("\nError: You should enter positive numbers only.\n\n");
        continue; }

    break; 
}
    return value;
}

// Euclidean Algorithm
long long calculate_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long num1, num2, num3, gcd;

    printf("--- Greatest Common Divisor (GCD) ---\n");

    num1 = get_validated_int("first number");
    num2 = get_validated_int("second number");
    num3 = get_validated_int("third number");

    if (num1 == 0 && num2 == 0 && num3 == 0) {
        printf("\nGCD of three 0's is undefined.\n");
    } else {
        gcd = calculate_gcd(calculate_gcd(num1, num2),num3);
        
        printf("\nThe GCD of %lld, %lld and %lld is: %lld\n", num1, num2, num3, gcd);
    }

    return 0;
}