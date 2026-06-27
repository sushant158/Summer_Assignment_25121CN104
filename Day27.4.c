#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
};

struct Student students[100];
int count = 0;

int addStudent() {
    if (count >= 100) {
        printf("Student list is full\n");
    }
    else {
        printf("Enter Roll Number: ");
        scanf("%d", &students[count].rollNo);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[count].name);
        printf("Enter Marks in Subject 1: ");
        scanf("%f", &students[count].marks1);
        printf("Enter Marks in Subject 2: ");
        scanf("%f", &students[count].marks2);
        printf("Enter Marks in Subject 3: ");
        scanf("%f", &students[count].marks3);

        students[count].total = students[count].marks1 + students[count].marks2 + students[count].marks3;
        students[count].percentage = students[count].total / 3.0;

        count++;
        printf("Student record added successfully\n");
    }
    return 0;
}

int displayStudents() {
    if (count == 0) {
        printf("No student records found\n");
    }
    else {
        printf("Marksheet Records\n");
        for (int i = 0; i < count; i++) {
            printf("Roll No: %d  Name: %s  Sub1: %.2f  Sub2: %.2f  Sub3: %.2f  Total: %.2f  Percentage: %.2f%%\n",
                   students[i].rollNo,
                   students[i].name,
                   students[i].marks1,
                   students[i].marks2,
                   students[i].marks3,
                   students[i].total,
                   students[i].percentage);
        }
    }
    return 0;
}

int searchStudent() {
    int roll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Record found: Name: %s  Total: %.2f  Percentage: %.2f%%\n",
                   students[i].name,
                   students[i].total,
                   students[i].percentage);
            return 0;
        }
    }
    printf("Student record not found\n");
    return 0;
}

int deleteStudent() {
    int roll;
    printf("Enter Roll Number to delete: ");
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
    return 0;
}

int main() {
    int choice;
    do {
        printf("Marksheet Generation System\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student Record\n");
        printf("4. Delete Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
