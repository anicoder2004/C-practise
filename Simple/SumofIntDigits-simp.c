// This Question came in 2023
#include <stdio.h>
#include <stdlib.h> // Included for abs()

int main() {
    int num, originalNum, sum = 0;
    char extra;

    printf("Enter an integer: ");
    
    // Validate that the input is a valid integer

    if (scanf("%d%c", &num, &extra) != 2 || extra != '\n' || extra == '.') {
        printf("Invalid input. Please enter whole numbers only.\n");
        return 1;
    }

    originalNum = num; // Store original input for final output
    num = abs(num);    // Handle negative numbers (e.g., -123 -> digits 1, 2, 3)

    // Loop until all digits are processed
    while (num > 0) {
        sum += num % 10; // Extract the last digit and add it to sum
        num /= 10;      // Remove the last digit
    }

    printf("The sum of the digits of %d is: %d\n", originalNum, sum);

    return 0;
}