#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    if (num1 > 0 && num2 > 0) { //and operator
        printf("Both numbers are positive.\n");
    } else if (num1 > 0 || num2 > 0) { // OR operator
        printf("At least one number is positive.\n");
    } else if (!(num1 > 0) && !(num2 > 0)) { // NOT operator
        printf("Neither number is positive.\n");
    }

    return 0;
}

