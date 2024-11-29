#include <stdio.h>

int main() {
    float b, x, y, a, c, d, A;

    // taking input values for the variables from user
    printf("Enter values for b, x, y, a, c, and d:\n");
    scanf("%f %f %f %f %f %f", &b, &x, &y, &a, &c, &d);

    // calculate the value of A using the given formula
    A = ((7 * 7 * b * (x * y + a)) / c) - 0.8 + (2 * b * d) / ((x + a) * (1 / y));


    printf("The result of the equation is: A = %.2f\n", A);

    return 0;
}

