#include <stdio.h>
int main() {
    int choice;
    while (1) {
        printf("1. Calculate Grade\n2. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Welcome to the Grade Calculator!\n");
            char Name[50];
    printf("Enter your name: ");
    scanf("%s", Name);
    int Marks;
    printf("Enter your marks: ");
    scanf("%d", &Marks);
    if (Marks < 0 || Marks > 100) {
        printf("Invalid Marks. Enter Marks between 0 and 100.\n");
        continue;
    }
    if (Marks >= 90) {
        printf("Name: %s\nMarks: %d\nGrade: A - Excellent\n", Name, Marks);
    } else if (Marks >=75 && Marks < 90) {
        printf("Name: %s\nMarks: %d\nGrade: B - Good\n", Name, Marks);
    } else if (Marks >=50 && Marks < 75) {
        printf("Name: %s\nMarks: %d\nGrade: C - Average\n", Name, Marks);
    } else {
      printf("Name:%s\nMarks:%d\nGrade: F - Improve\n", Name, Marks);
    } 
    int choice2;
    printf("Do you want to calculate another grade?\n 1. Yes\n 2. No\n ");
    scanf("%d", &choice2);
    if (choice2 == 1) {
        continue;
    } else if (choice2 == 2) {
        printf("Exiting the program. Goodbye!\n");
    }
    } else if (choice == 2) {
                printf("Exiting the program. Goodbye!\n");
                break;
           } else {
             printf("Invalid choice. Please enter 1 or 2.\n");
           }
           return 0;
        }
    } 
