// This Code is to get the grade according to mark

#include <stdio.h>
#include <stdlib.h>

int get_validated_mark() {
    char buffer[100];
    char *endptr;
    int mark;

while (1) {
    printf("Enter Your Mark: ");
    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error: System failed to read input. Exiting...\n");
        exit(EXIT_FAILURE); }

    mark = strtod(buffer, &endptr);

    if (endptr == buffer || *endptr != '\n' || mark < 0 || mark > 100) {
        printf("\nError: Invalid input. Enter your valid mark.\n");
        continue; }

    break; }
    return mark;
}


int main(){

    int marks = get_validated_mark();

    if (marks >= 80) { printf("Your Grade is: A+"); }
    else if (marks >= 70) { printf("Your Grade is: A"); }
    else if (marks >= 60) { printf("Your Grade is: A-"); }
    else if (marks >= 50) { printf("Your Grade is: B"); }
    else if (marks >= 40) { printf("Your Grade is: C"); }
    else { printf("Your Grade is: F"); }

}