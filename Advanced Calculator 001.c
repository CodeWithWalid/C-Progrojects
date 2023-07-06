#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2;

    printf("Welcome to the Advanced Calculator!\n");

    do {
        printf("======================================\n");
        printf("Please select an operator:\n");
        printf("1. Additon\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Divison by zero is not allowed.\n");
            break;
        case 5:
            printf("Enter the base number: ");
            scanf("%lf", &num1);
            printf("Enter the exponent: ");
            scanf("%lf", &num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, pow(num1, num2));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0)
                printf("Square root of %.2lf = %.2lf\n", num1, sqrt(num1));
            else
                printf("Error: Square root of a negative number is undefined.\n");
            break;
        case 0:
            printf("Exiting calculator....\n");
            break;
        default:
            printf("Invalid Choice! Please try again.\n");
            break;
        }
    }
    while (choice != 0);
    return 0;
}
