#include <stdio.h>
int main() {
    int number;
    int reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
do {
    int digit = number % 10;
    reversed = reversed * 10 + digit;
    number /= 10;
} while (number > 0);
    printf("Reversed number: %d\n", reversed);
    return 0;
}