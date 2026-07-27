#include <stdio.h>

int main() {
    // Hardcoded array
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculate the total number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements:\n");

    // Loop through and read each element from the array
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}