#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account accounts[100];
int count = 0;

int addAccount() {
    if (count >= 100) {
        printf("Account list is full\n");
    }
    else {
        printf("Enter Account Number: ");
        scanf("%d", &accounts[count].accNo);
        printf("Enter Name: ");
        scanf(" %[^\n]", accounts[count].name);
        printf("Enter Initial Balance: ");
        scanf("%f", &accounts[count].balance);

        count++;
        printf("Account created successfully\n");
    }
    return 0;
}

int displayAccounts() {
    if (count == 0) {
        printf("No accounts found\n");
    }
    else {
        printf("Bank Accounts\n");
        for (int i = 0; i < count; i++) {
            printf("AccNo: %d  Name: %s  Balance: %.2f\n",
                   accounts[i].accNo,
                   accounts[i].name,
                   accounts[i].balance);
        }
    }
    return 0;
}

int searchAccount() {
    int acc;
    printf("Enter Account Number to search: ");
    scanf("%d", &acc);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == acc) {
            printf("Record found: Name: %s  Balance: %.2f\n",
                   accounts[i].name,
                   accounts[i].balance);
            return 0;
        }
    }
    printf("Account not found\n");
    return 0;
}

int depositMoney() {
    int acc;
    float amount;
    printf("Enter Account Number to deposit: ");
    scanf("%d", &acc);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == acc) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. New Balance: %.2f\n", accounts[i].balance);
            return 0;
        }
    }
    printf("Account not found\n");
    return 0;
}

int withdrawMoney() {
    int acc;
    float amount;
    printf("Enter Account Number to withdraw: ");
    scanf("%d", &acc);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == acc) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New Balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance\n");
            }
            return 0;
        }
    }
    printf("Account not found\n");
    return 0;
}

int deleteAccount() {
    int acc;
    printf("Enter Account Number to delete: ");
    scanf("%d", &acc);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == acc) {
            for (int j = i; j < count - 1; j++) {
                accounts[j] = accounts[j + 1];
            }
            count--;
            printf("Account deleted successfully\n");
            return 0;
        }
    }
    printf("Account not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("Bank Account Management System\n");
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addAccount(); break;
            case 2: displayAccounts(); break;
            case 3: searchAccount(); break;
            case 4: depositMoney(); break;
            case 5: withdrawMoney(); break;
            case 6: deleteAccount(); break;
            case 7: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}
