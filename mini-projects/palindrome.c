#include <stdio.h>
int main() {
    int number;
    int orginal;
    int reversed = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    orginal = number;
    do {
    int digit = number % 10;
    reversed = reversed * 10 + digit;
    number /= 10;
} while (number > 0);
if(orginal == reversed) {
    printf("palindrome");
} else {
    printf("Not palindrome");
}
    return 0;
}
