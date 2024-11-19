#include <stdio.h>

int main()
 {
    double num1, num2;
    char action;

     printf("Simple Calculator\n");
    printf("==================\n");
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &action);  


    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (action) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}