#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    int c;
    float numerator1, numerator2, denominator, x1, x2; //we took numerator and denominator for easier calculations

    // taking input values for a b and c
    printf("Enter a float value for a: ");
    scanf("%f", &a);
    printf("Enter a float value for b: ");
    scanf("%f", &b);
    printf("Enter an integer value for c: ");
    scanf("%d", &c);

    // Calculating denominator
    denominator = pow((a / b), 2) + pow((b / c), 2);

    // Calculate the numerators
    numerator1 = -b + sqrt(b * b - 4 * a * c); // For +
    numerator2 = -b - sqrt(b * b - 4 * a * c); // For -

    // Calculate the two results
    x1 = numerator1 / denominator;
    x2 = numerator2 / denominator;

    // Print the results
    printf("The results of the formula are:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}

