// This Question came in 2022
#include <stdio.h>

// Function that accepts pointers to x and y
void swap(int *a, int *b) {
    int temp = *a; // Store the value pointed to by 'a' in 'temp'
    *a = *b;       // Copy the value pointed to by 'b' into the memory location of 'a'
    *b = temp;     // Copy 'temp' into the memory location of 'b'
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Pass the memory addresses of x and y using the address-of operator (&)
    swap(&x, &y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}