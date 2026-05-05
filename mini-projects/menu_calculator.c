#include <stdio.h>
float add(float a, float b) {
return a + b;
}
float subtract(float a, float b) {
return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if(b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
int main() {
    float a, b;
    int choice;
    printf("Enter Numbers: ");
    scanf("%f %f", &a, &b);
    while(1) {
        printf("1. add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
    if(choice == 1) {
    printf("Addition: %.2f\n", add(a,b));
    continue;
    }
    if(choice == 2) {
       printf("Subtraction: %.2f\n", subtract(a,b));  
       continue;
    }
    if(choice == 3) {
        printf("Multiplication: %.2f\n",multiply(a,b));
        continue;
    }
    if(choice == 4) {
    printf("Divide: %.2f\n", divide(a,b));
    continue;
    }
    if(choice == 5) {
        printf("Exiting the calculator!!");
        break;
    }
    return 0;
}
}
