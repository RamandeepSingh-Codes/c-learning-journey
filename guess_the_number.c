#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
srand(time(0));
int number = rand() % 100 + 1;
int attempts = 0;
int guess = 0;

while(guess != number) {
    printf("Guess The Number(0-100): \n");
    scanf("%d", &guess);
    if(guess > number){
        printf("guess lower!\n");
    } else if(guess < number){
        printf("guess higher!!\n");
    } else {
        printf("You Guessed the number!!\n");
    }
    attempts++;
    }
    printf("It took you %d attempts", attempts);
    return 0;
}