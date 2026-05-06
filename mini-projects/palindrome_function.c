#include <stdio.h>
int isPalindrome(int n) {
    int orginal = n;
    int reverse = 0;
    while(n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n/10;
    }
    if(orginal == reverse) {
    return 1;
} else {
    return 0;
}
}
int main () {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    int result = isPalindrome(num);
    if(result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}