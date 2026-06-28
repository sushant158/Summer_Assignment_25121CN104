#include <stdio.h>

struct Contact {
    int id;
    char name[50];
    char phone[20];
    char email[50];
};

struct Contact contacts[100];
int count = 0;

int addContact() {
    if (count >= 100) {
        printf("Contact list is full\n");
    }
    else {
        printf("Enter Contact ID: ");
        scanf("%d", &contacts[count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", contacts[count].name);
        printf("Enter Phone Number: ");
        scanf(" %[^\n]", contacts[count].phone);
        printf("Enter Email: ");
        scanf(" %[^\n]", contacts[count].email);

        count++;
        printf("Contact added successfully\n");
    }
    return 0;
}

int displayContacts() {
    if (count == 0) {
        printf("No contacts found\n");
    }
    else {
        printf("Contact List\n");
        for (int i = 0; i < count; i++) {
            printf("ID: %d  Name: %s  Phone: %s  Email: %s\n",
                   contacts[i].id,
                   contacts[i].name,
                   contacts[i].phone,
                   contacts[i].email);
        }
    }
    return 0;
}

int searchContact() {
    int id;
    printf("Enter Contact ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (contacts[i].id == id) {
            printf("Record found: Name: %s  Phone: %s  Email: %s\n",
                   contacts[i].name,
                   contacts[i].phone,
                   contacts[i].email);
            return 0;
        }
    }
    printf("Contact not found\n");
    return 0;
}

int deleteContact() {
    int id;
    printf("Enter Contact ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (contacts[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            printf("Contact deleted successfully\n");
            return 0;
        }
    }
    printf("Contact not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("Contact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
