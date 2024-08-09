#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Select operation:\n");
    printf(" + for addition\n");
    printf(" - for subtraction\n");
    printf(" * for multiplication\n");
    printf(" / for division\n");
    printf("Enter operator: ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any leftover whitespace

    printf("Enter two numbers:\n");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {  // Check for division by zero
                result = num1 / num2;
                printf("%f / %f = %f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}
