#include <stdio.h>
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
    sum += arr[i];
}
return sum;
}
int main () {
    int arr[5];
    int n = 5;
    printf("Enter 5 numbers\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr, n);
    printf("Sum: %d", result);
    return 0;
}