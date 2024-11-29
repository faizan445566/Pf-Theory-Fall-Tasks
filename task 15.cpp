#include <stdio.h>

int main() {
    int school, department;

    // Input choice for school
    printf("Select a school:\n");
    printf("1. School of Computer Science\n");
    printf("2. School of Business\n");
    printf("3. School of Engineering\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &school);

    switch (school) {
        case 1: // School of Computer Science
            printf("\nYou selected: School of Computer Science\n");
            printf("Select a department:\n");
            printf("1. Department of Informatics\n");
            printf("2. Department of Machine Learning\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &department);

            switch (department) {
                case 1:
                    printf("You selected: Department of Informatics\n");
                    break;
                case 2:
                    printf("You selected: Department of Machine Learning\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
            }
            break;

        case 2: // School of Business
            printf("\nYou selected: School of Business\n");
            printf("Select a department:\n");
            printf("1. Department of Commerce\n");
            printf("2. Department of Purchasing\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &department);

            switch (department) {
                case 1:
                    printf("You selected: Department of Commerce\n");
                    break;
                case 2:
                    printf("You selected: Department of Purchasing\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
            }
            break;

        case 3: // School of Engineering
            printf("\nYou selected: School of Engineering\n");
            printf("Select a department:\n");
            printf("1. Department of Mechanical Engineering\n");
            printf("2. Department of Mechatronic Engineering\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &department);

            switch (department) {
                case 1:
                    printf("You selected: Department of Mechanical Engineering\n");
                    break;
                case 2:
                    printf("You selected: Department of Mechatronic Engineering\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
            }
            break;

        default:
            printf("Invalid school choice.\n");
    }

    return 0;
}

