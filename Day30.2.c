#include<stdio.h>
#include<string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available; 
};

struct Book library[100];
int count = 0;

int addBook() {
    if (count >= 100) {
        printf("Library is full\n");
    }
    else {
        library[count].id = count + 1;
        printf("Enter Book Title: ");
        scanf(" %[^\n]", library[count].title);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", library[count].author);
        library[count].available = 1;
        count++;
        printf("Book added successfully\n");
    }
    return 0;
}

int displayBooks() {
    if (count == 0) {
        printf("No books in library\n");
    }
    else {
        printf("Library Books\n");
        for (int i = 0; i < count; i++) {
            printf("ID: %d  Title: %s  Author: %s  Status: %s\n",
                   library[i].id,
                   library[i].title,
                   library[i].author,
                   library[i].available ? "Available" : "Issued");
        }
    }
    return 0;
}

int searchBook() {
    char search[50];
    printf("Enter Book Title to search: ");
    scanf(" %[^\n]", search);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, search) == 0) {
            printf("Book found: ID: %d  Author: %s  Status: %s\n",
                   library[i].id,
                   library[i].author,
                   library[i].available ? "Available" : "Issued");
            return 0;
        }
    }
    printf("Book not found\n");
    return 0;
}

int deleteBook() {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                library[j] = library[j + 1];
            }
            count--;
            printf("Book deleted successfully\n");
            return 0;
        }
    }
    printf("Book not found\n");
    return 0;
}

int issueBook() {
    int id;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].available) {
                library[i].available = 0;
                printf("Book issued successfully\n");
            } else {
                printf("Book already issued\n");
            }
            return 0;
        }
    }
    printf("Book not found\n");
    return 0;
}

int returnBook() {
    int id;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (!library[i].available) {
                library[i].available = 1;
                printf("Book returned successfully\n");
            } else {
                printf("Book was not issued\n");
            }
            return 0;
        }
    }
    printf("Book not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: issueBook(); break;
            case 6: returnBook(); break;
            case 7: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}
