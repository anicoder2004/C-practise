// This Question came in 2022
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Mismatch found, not a palindrome
        }
        start++;
        end--;
    }
    
    return true; // All characters matched
}

int main() {
    char str[100];

    printf("Enter a string: ");
    
    // Read a full line including spaces (safely up to 99 chars)
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome!\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}