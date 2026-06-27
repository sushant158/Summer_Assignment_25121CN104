#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[50];
};

struct Student students[100];  
int count = 0;                 

int addStudent() {
    if (count >= 100) {
        printf("Record list is full!\n");
        
    }
    else{
    printf("Enter Roll Number ");
    scanf("%d", &students[count].rollNo);
    printf("Enter Name ");
    scanf(" %[^\n]", students[count].name);
    printf("Enter Age ");
    scanf("%d", &students[count].age);
    printf("Enter Course ");
    scanf(" %[^\n]", students[count].course);

    count++;
    printf("Student record added successfully\n");
    }
}

int displayStudents() {
    if (count == 0) {
        printf("No student records found.\n");
    }
    else{
    printf("Student Records\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d  Name: %s  Age: %d  Course: %s\n",
               students[i].rollNo,
               students[i].name,
               students[i].age,
               students[i].course);
    }
}
}
int searchStudent() {
    int roll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Record found: Name: %s  Age: %d  Course: %s\n",
                   students[i].name,
                   students[i].age,
                   students[i].course);
            return 0;
        }
    }
    printf("Student record not found\n");
}

int deleteStudent() {
    int roll;
    printf("Enter Roll Number to delete ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Student record deleted successfully\n");
            return 0;
        }
    }
    printf("Student record not found\n");
}

int main() {
    int choice;
    do {
        printf(" Student Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Thank you for using student management system\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
