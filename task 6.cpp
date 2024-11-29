#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three integer numbers
    printf("Enter three integer numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // using nested if statements as mentioned by sir sheeraz
    if (num1 == num2) {
        if (num2 == num3) {
            printf("All values are equal\n");
        } else {
            printf("They all are not equal\n");
        }
    } else {
        printf("They all are not equal\n");
    }

    return 0;
}

