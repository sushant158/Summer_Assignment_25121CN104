#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char department[50];
    float salary;
};

struct Employee employees[100];  
int count = 0;                   

int addEmployee() {
    if (count >= 100) {
        printf("Employee list is full\n");
        
    }
    else{
    printf("Enter Employee ID: ");
    scanf("%d", &employees[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", employees[count].name);
    printf("Enter Age: ");
    scanf("%d", &employees[count].age);
    printf("Enter Department: ");
    scanf(" %[^\n]", employees[count].department);
    printf("Enter Salary: ");
    scanf("%f", &employees[count].salary);

    count++;
    printf("Employee record added successfully\n");
    }
}

int displayEmployees() {
    if (count == 0) {
        printf("No employee records found\n");
        
    }
    else{
    printf("Employee Records \n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d  Name: %s  Age: %d  Dept: %s  Salary: %.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].age,
               employees[i].department,
               employees[i].salary);
    }
}
}
int searchEmployee() {
    int id;
    printf("Enter Employee ID to search ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Record found: Name: %s  Age: %d  Dept: %s  Salary: %.2f\n",
                   employees[i].name,
                   employees[i].age,
                   employees[i].department,
                   employees[i].salary);
            return 0;
        }
    }
    printf("Employee record not found\n");
}

int deleteEmployee() {
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            count--;
            printf("Employee record deleted successfully\n");
            return 0;
        }
    }
    printf("Employee record not found\n");
}

int main() {
    int choice;
    do {
        printf("Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
