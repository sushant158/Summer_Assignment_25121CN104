#include <stdio.h>

struct Salary {
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

struct Salary records[100];  
int count = 0;               

int addRecord() {
    if (count >= 100) {
        printf("Salary records are full\n");
    }
    else {
        printf("Enter Employee ID: ");
        scanf("%d", &records[count].empId);
        printf("Enter Name: ");
        scanf(" %[^\n]", records[count].name);
        printf("Enter Basic Salary: ");
        scanf("%f", &records[count].basicSalary);
        printf("Enter HRA: ");
        scanf("%f", &records[count].hra);
        printf("Enter DA: ");
        scanf("%f", &records[count].da);

        records[count].grossSalary = records[count].basicSalary 
                                   + records[count].hra 
                                   + records[count].da;

        count++;
        printf("Salary record added successfully\n");
    }
    return 0;
}

int displayRecords() {
    if (count == 0) {
        printf("No salary records found\n");
    }
    else {
        printf("Salary Records\n");
        for (int i = 0; i < count; i++) {
            printf("ID: %d  Name: %s  Basic: %.2f  HRA: %.2f  DA: %.2f  Gross: %.2f\n",
                   records[i].empId,
                   records[i].name,
                   records[i].basicSalary,
                   records[i].hra,
                   records[i].da,
                   records[i].grossSalary);
        }
    }
    return 0;
}

int searchRecord() {
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].empId == id) {
            printf("Record found: Name: %s  Gross Salary: %.2f\n",
                   records[i].name,
                   records[i].grossSalary);
            return 0;
        }
    }
    printf("Salary record not found\n");
    return 0;
}

int deleteRecord() {
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].empId == id) {
            for (int j = i; j < count - 1; j++) {
                records[j] = records[j + 1];
            }
            count--;
            printf("Salary record deleted successfully\n");
            return 0;
        }
    }
    printf("Salary record not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("\nSalary Management System\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Delete Salary Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecord(); break;
            case 2: displayRecords(); break;
            case 3: searchRecord(); break;
            case 4: deleteRecord(); break;
            case 5: printf("Goodbye \n"); break;
            default: printf("Invalid choice \n");
        }
    } while (choice != 5);

    return 0;
}
