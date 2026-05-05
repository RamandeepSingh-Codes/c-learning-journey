#include <stdio.h>
int main () {
    float a, b;
    char op;
    printf("Enter your first number: ");
    scanf("%f", &a);
    printf("Enter your operator(+,-,*,/): ");
    scanf(" %c", &op);
    printf("Enter your second number: ");
    scanf("%f", &b);
    switch(op) {
        case '+':
        printf("Result: %.2f\n", a+b);
        break;
        case '-':
        printf("Result: %.2f\n", a-b);
        break;
        case '*':
        printf("Result: %.2f\n", a*b);
        break;
        case '/':
        if(b == 0) {
            printf("Error!! Division by Zero!!\n");
        } else {
        printf("Result: %.2f\n", a/b);
        break;
        }
        default:
        printf("Invalid Operator\n");
    }
    return 0;
}