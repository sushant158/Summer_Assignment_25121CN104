#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

struct Book library[100];
int count = 0;             

int addBook() {
    if (count >= 100) {
        printf("Library is full \n");
        
    }
    else{
    library[count].id = count + 1;
    printf("Enter book title  ");
    scanf(" %[^\n]", library[count].title);
    printf("Enter author name: ");
    scanf(" %[^\n]", library[count].author);
    count++;
    printf("Book added successfully\n");
    }
}


int displayBooks() {
    if (count == 0) {
        printf("No books in library\n");
    }
    else{
    printf("Library Books are following\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d  Title: %s  Author: %s\n",
               library[i].id,
               library[i].title,
               library[i].author);
    }
}
}

int searchBook() {
    char search[50];
    printf("Enter book title to search ");
    scanf(" %[^\n]", search);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, search) == 0) {
            printf("Book found: ID %d   Author: %s\n",
                   library[i].id,
                   library[i].author);
            return 0;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int choice;
    do {
        printf(" Library Management System \n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: printf("Thank you for using library\n"); break;
            default: printf("Invalid choice \n");
        }
    } while (choice != 4);

    return 0;
}
