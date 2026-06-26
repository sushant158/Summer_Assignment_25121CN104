#include <stdio.h>
int main()
{
    int balance = 10000000, amount;
    int choice = 10;
    while (choice != 4)
    {
        printf("Enter 1 to check balance\n");
        printf("Enter 2 to deposit money \n");
        printf("Enter 3 to withdraw money\n");
        printf("Enter 4 to exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Your balance is %d\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter the amount to be deposited\n");
            scanf("%d", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Amount deposited succesfully and current balance is %d\n", balance);
            }
            else
            {
                printf("Invalid amount\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter the amount for the withdrawl\n");
            scanf("%d", &amount);
              if (amount > 0 && amount<=balance)
            {
                balance -= amount;
                printf("Amount withdrawl succesfully and current balance is %d\n", balance);
            }
             else
            {
                printf("Invalid amount\n");
            }
        }
        else if(choice==4){
            printf("Thanks for using the atm\n");
            break;
        }
        else{
            printf("Enter the correct choice\n");
        }
        

    }
}
