#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
        max = arr[i];
    }
}
return max;
}
int main () {
    int arr[5];
    int n = 5;
    printf("Enter 5 numbers\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findMax(arr, n);
    printf("Max: %d", result);
    return 0;
}
