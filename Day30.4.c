#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[50];
    float marks[3];   
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
        printf("Enter Age: ");
        scanf("%d", &students[count].age);
        printf("Enter Course: ");
        scanf(" %[^\n]", students[count].course);

        students[count].total = 0;
        for (int i = 0; i < 3; i++) {
            printf("Enter Marks in Subject %d: ", i + 1);
            scanf("%f", &students[count].marks[i]);
            students[count].total += students[count].marks[i];
        }
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
        printf("Student Records\n");
        for (int i = 0; i < count; i++) {
            printf("Roll No: %d  Name: %s  Age: %d  Course: %s  Total: %.2f  Percentage: %.2f%%\n",
                   students[i].rollNo,
                   students[i].name,
                   students[i].age,
                   students[i].course,
                   students[i].total,
                   students[i].percentage);
        }
    }
    return 0;
}

int searchByRoll() {
    int roll;
    printf("Enter Roll Number to search ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Record found: Name: %s  Age: %d  Course: %s  Percentage: %.2f%%\n",
                   students[i].name,
                   students[i].age,
                   students[i].course,
                   students[i].percentage);
            return 0;
        }
    }
    printf("Student record not found\n");
    return 0;
}

int searchByName() {
    char searchName[50];
    printf("Enter Name to search: ");
    scanf(" %[^\n]", searchName);
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Record found: Roll No: %d  Age: %d  Course: %s  Percentage: %.2f%%\n",
                   students[i].rollNo,
                   students[i].age,
                   students[i].course,
                   students[i].percentage);
            return 0;
        }
    }
    printf("Student record not found\n");
    return 0;
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
    return 0;
}

int updateMarks() {
    int roll;
    printf("Enter Roll Number to update marks: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            students[i].total = 0;
            for (int j = 0; j < 3; j++) {
                printf("Enter new Marks in Subject %d ", j + 1);
                scanf("%f", &students[i].marks[j]);
                students[i].total += students[i].marks[j];
            }
            students[i].percentage = students[i].total / 3.0;
            printf("Marks updated successfully\n");
            return 0;
        }
    }
    printf("Student record not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Delete Student\n");
        printf("6. Update Marks\n");
        printf("7. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchByRoll(); break;
            case 4: searchByName(); break;
            case 5: deleteStudent(); break;
            case 6: updateMarks(); break;
            case 7: printf("Goodbye\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
