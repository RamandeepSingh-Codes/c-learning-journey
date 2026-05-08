#include <stdio.h>
#include <string.h>
int main () {
    char str[20];
    scanf("%s", str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
    len++;
    }
    int start = 0;
    int end = len - 1;
    int isPalindrome = 1;
    while(start < end) {
        if(str[start] != str[end]){
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
        if(isPalindrome){
        printf("palindrome\n");
        }else {
            printf("Not palindrome\n");
        }
        return 0;
    }