#include <stdio.h>

int main() {
    float credithours1, credithours2, credithours3, credithours4, credithours5;
    float gradepoints1, gradepoints2, gradepoints3, gradepoints4, gradepoints5;
    float totalcredithours, totalgradepoints, SGPA;

    // taking input of credit hours and grade points for 5 courses using scanf
    printf("Enter the credit hours and grade points for Course 1:\n");
    scanf("%f %f", &credithours1, &gradepoints1);

    printf("Enter the credit hours and grade points for Course 2:\n");
    scanf("%f %f", &credithours2, &gradepoints2);

    printf("Enter the credit hours and grade points for Course 3:\n");
    scanf("%f %f", &credithours3, &gradepoints3);

    printf("Enter the credit hours and grade points for Course 4:\n");
    scanf("%f %f", &credithours4, &gradepoints4);

    printf("Enter the credit hours and grade points for Course 5:\n");
    scanf("%f %f", &credithours5, &gradepoints5);

    // sum of all grade point
    totalgradepoints = gradepoints1+gradepoints2+gradepoints3+gradepoints4+gradepoints5;
    
    //sum of all credit hours
    totalcredithours = credithours1 + credithours2 + credithours3 + credithours4 + credithours5;

    // Calculate SGPA
    SGPA = totalgradepoints / totalcredithours;

    //  results
    printf("\nTotal Semester Credit Hours: %.2f\n", totalcredithours);
    printf("SGPA: %.2f\n", SGPA);

    return 0;
}

