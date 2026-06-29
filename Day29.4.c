#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Item inventory[100];
int count = 0;

int addItem() {
    if (count >= 100) {
        printf("Inventory is full\n");
    }
    else {
        printf("Enter Item ID: ");
        scanf("%d", &inventory[count].id);
        printf("Enter Item Name: ");
        scanf(" %[^\n]", inventory[count].name);
        printf("Enter Quantity: ");
        scanf("%d", &inventory[count].quantity);
        printf("Enter Price: ");
        scanf("%f", &inventory[count].price);

        count++;
        printf("Item added successfully\n");
    }
    return 0;
}

int displayItems() {
    if (count == 0) {
        printf("No items in inventory\n");
    }
    else {
        printf("Inventory List\n");
        for (int i = 0; i < count; i++) {
            printf("ID: %d  Name: %s  Quantity: %d  Price: %.2f\n",
                   inventory[i].id,
                   inventory[i].name,
                   inventory[i].quantity,
                   inventory[i].price);
        }
    }
    return 0;
}

int searchItem() {
    int id;
    printf("Enter Item ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("Record found: Name: %s  Quantity: %d  Price: %.2f\n",
                   inventory[i].name,
                   inventory[i].quantity,
                   inventory[i].price);
            return 0;
        }
    }
    printf("Item not found\n");
    return 0;
}

int updateQuantity() {
    int id, qty;
    printf("Enter Item ID to update quantity ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("Enter new quantity: ");
            scanf("%d", &qty);
            inventory[i].quantity = qty;
            printf("Quantity updated successfully\n");
            return 0;
        }
    }
    printf("Item not found\n");
    return 0;
}

int deleteItem() {
    int id;
    printf("Enter Item ID to delete ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            count--;
            printf("Item deleted successfully\n");
            return 0;
        }
    }
    printf("Item not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: updateQuantity(); break;
            case 5: deleteItem(); break;
            case 6: printf("Goodbye\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}
