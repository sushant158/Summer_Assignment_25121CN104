#include <stdio.h>

int arr[100];
int n = 0;   // number of elements

int createArray() {
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array created successfully\n");
    return 0;
}

int displayArray() {
    if (n == 0) {
        printf("Array is empty\n");
    }
    else {
        printf("Array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

int insertElement() {
    int pos, val;
    if (n >= 100) {
        printf("Array is full\n");
    }
    else {
        printf("Enter position (0 to %d): ", n);
        scanf("%d", &pos);
        printf("Enter value: ");
        scanf("%d", &val);

        if (pos < 0 || pos > n) {
            printf("Invalid position\n");
        }
        else {
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            n++;
            printf("Element inserted successfully\n");
        }
    }
    return 0;
}

int deleteElement() {
    int pos;
    if (n == 0) {
        printf("Array is empty\n");
    }
    else {
        printf("Enter position (0 to %d): ", n - 1);
        scanf("%d", &pos);

        if (pos < 0 || pos >= n) {
            printf("Invalid position\n");
        }
        else {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Element deleted successfully\n");
        }
    }
    return 0;
}

int searchElement() {
    int val;
    printf("Enter value to search ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Element found at position %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: searchElement(); break;
            case 6: printf("Thank you for using\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}
