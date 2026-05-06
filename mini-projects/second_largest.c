#include <stdio.h>
int main()
{
    int numbers[10];
    int max, second;
    printf("Enter 10 Numbers:\n");
    for (int i = 0; i < 10; i++) {
    scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    second = numbers[0];
    for(int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            second = max;
            max = numbers[i];
        }
        else if (numbers[i] > second && numbers[i] != max) {
        second = numbers[i];
    }
} 
printf("Max: %d\n", max);
printf("Second largest: %d\n", second);
return 0;
}
