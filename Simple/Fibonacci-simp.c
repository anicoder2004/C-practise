// This Question came in 2023
#include <stdio.h>

int main() {
    int n;
    long long first = 0, second = 1, next;
    char extra;

    printf("Enter the number of Fibonacci terms to display: ");
    
    // Validate that input is a positive integer
    if (scanf("%d%c", &n, &extra) != 2 || extra != '\n' || n <= 0) {
        printf("Invalid input. Please enter a valid whole positive integer.\n");
        return 1;
    }

    printf("\nThe first %d Fibonacci numbers are:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", first);
            continue;
        }
        if (i == 2) {
            printf(", %lld", second);
            continue;
        }
        
        next = first + second;
        first = second;
        second = next;
        
        printf(", %lld", next);
    }
    
    printf("\n");
    return 0;
}