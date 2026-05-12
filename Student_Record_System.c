#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};
struct Student students[50];
int count;
void addStudent() {
    printf("\n--- Add Student ---\n");
    students[count].id = count + 1;
    printf("Enter Name: ");
    scanf("%s", students[count].name);
    printf("Enter age: ");
    scanf("%d", &students[count].age);
    printf("Enter marks: ");
    scanf("%f", &students[count].marks);
    count++;
    printf("Student added successfully!!\n");
}
void viewAll() {
    if(count == 0) {
        printf("No Students added yet!!\n");
        return;
    }
    printf("\n================================================\n");
    printf("    ID  |   Name    |   Age     |       Marks     \n");
    printf("================================================\n");
    for(int i = 0; i < count; i++) {
        printf("    %d  |   %s  |   %d   | %.2f\n", students[i].id, students[i].name, students[i].age, students[i].marks);
    }
    printf("==============================================\n");
    printf("Total Students: %d\n", count);
}
void searchStudent() {
    char searchName[50];
    int found = 0;
    printf("\n--- Search Student ---\n");
    printf("Enter name to search: ");
    scanf("%s", searchName);
    for(int i = 0; i < count; i++) {
    if(strcmp(students[i].name, searchName) == 0) {
        printf("\n--- Student Found!! ---\n");
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        found = 1;
        break;
    }
}
if(found == 0) {
    printf("Student not found!!\n");
}
}
void showStatistics() {
    if(count == 0) {
        printf("No Students yet!!\n");
        return;
    }
    float sum = 0;
    float highest = students[0].marks;
    float lowest = students[0].marks;
    int topperIndex = 0;
    int pass = 0; 
    int fail = 0;
    for(int i = 0; i < count; i++) {
        sum += students[i].marks;
        if(students[i].marks > highest) {
            highest = students[i].marks;
            topperIndex = i;
        }
        if(students[i].marks < lowest) {
        lowest = students[i].marks;
        }
        if(students[i].marks >= 50) {
            pass++;
        } else {
            fail++;
        }
        }
        float average = sum / count;
        printf("\n=============================================\n");
        printf("             STATISTICS!!           \n");
        printf("=============================================\n");
        printf("Total Students: %d\n", count);
        printf("Average Marks: %.2f\n", average);
        printf("Highest: %.2f\n", highest);
        printf("Lowest: %2.f\n", lowest);
        printf("Topper: %s\n", students[topperIndex].name);
        printf("Passed: %d\n", pass);
        printf("Failed: %d\n", fail);
        printf("=============================================\n");
    }
    void saveToFile() {
        FILE *file;
        file = fopen("students.txt", "w");

        if(file == NULL) {
            printf("Error saving file!!\n");
            return;
        }
        fprintf(file, "=============================================\n");
        fprintf(file, "            Student Record System          \n");
        fprintf(file, "=============================================\n");
        for(int i = 0; i < count; i++){
        fprintf(file, "ID: %d\n", students[i].id);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Age: %d\n", students[i].age);
        fprintf(file, "Marks: %.2f\n", students[i].marks);
        fprintf(file, "=============================================\n");
        }
        fprintf(file, "Total Students: %d\n", count);
        fclose(file);
        printf("Data saved to students.txt!!\n)");
    }
int main () {
    int choice;
    do {
        printf("\n=============================================\n");
        printf("             Student Record System             \n");
        printf("=============================================\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Students\n");
        printf("4. Show Statistics\n");
        printf("5. Save Data\n");
        printf("6. Exit\n");
        printf("==============================================\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addStudent(); break;
                
            case 2: viewAll(); break;
                
            case 3: searchStudent(); break;
                
            case 4: showStatistics(); break;
             
            case 5: saveToFile(); break;
           
            case 6: printf("Good Bye!!\n"); break;
                
            default: printf("Invalid!!\n"); 
                break;
        }
    } while(choice != 5);
    return 0;
}
