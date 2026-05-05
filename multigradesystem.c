#include <stdio.h>
int main() {
    int n;
    int marks[100];
    int sum = 0;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countF = 0;
    int highest = -1;
    int lowest = 101;
    int topIndex = 0;
    int pass = 0;
    int fail = 0;
    char name[100][50]; 
    printf("======================================\n");
    printf("       Student Management System       \n");
    printf("======================================\n");
    printf("How Many Students: ");
    scanf("%d", &n);  
    if(n > 100) {
        printf("Limit exceeded (max 100 students)\n");
        return 0;
    }
    if(n <= 0) {
printf("Invalid number of Students\n");
return 0;
    }
  for (int i = 0; i < n; i++) {
    printf("Enter Name of Student %d: ", i + 1);
    scanf("%s", name[i]);
  printf("Enter Marks of Student %d: ", i + 1); 
while(1) {
    scanf("%d", &marks[i]); 
    if (marks[i] >= 0 && marks[i] <= 100) break;
    printf("Invalid Marks! Enter again: ");
}
  sum += marks[i];
  if (marks[i] > highest) {
    highest = marks[i];
    topIndex = i;
  }
  if (marks[i] < lowest) {
    lowest = marks[i];
  }
  if(marks[i]>= 50) pass++;
  else fail++;
  if (marks[i]>= 90) {
    countA++;
  } else if (marks[i] >= 75) {
    countB++;
  }else if (marks[i] >= 50) {
    countC++;
  } else {
        countF++;
    }
  }
  float average =(float)sum / n;
  printf("======================================\n");
  for(int i  = 0; i < n; i++) {
    printf("Name: %s - Marks: %d\n", name[i], marks[i]);
  }
  printf("Highest Marks:              %d\n", highest);
  printf("Lowest Marks:               %d\n", lowest);
  printf("Topper:                     %s (%d)\n", name[topIndex], highest);
  printf("Students Passed:            %d\n", pass);
  printf("Students Failed:            %d\n", fail);
  printf("Average marks =             %.2f\n", average);
  printf("Grade A Students:           %d\n", countA);
  printf("Grade B Students:           %d\n", countB);
  printf("Grade C Students:           %d\n", countC);
  printf("Grade F Students:           %d\n", countF);
  printf("======================================\n");
  printf("           Report Complete           \n");
  printf("======================================\n");
 return 0;
}
