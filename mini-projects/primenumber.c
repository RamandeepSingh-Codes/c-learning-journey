#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 2) {
        printf("%d is not a prime number.", number);
        return 0;
    } else {
        int isprime = 1;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
        isprime = 0; 
        break;
    }
    }
    if (isprime == 1) {
         printf("%d is a prime number.", number);
            return 0;
         } else {
            printf("%d is not a prime number.", number);
            return 0;
            }
        }
    }
    
    
