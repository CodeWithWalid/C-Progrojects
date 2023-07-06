#include <stdio.h>
int balance = 10000;

void displayMenu();
void withdraw();
void deposit();
void checkBalance();

int main()
{
    int option;

    printf("Welcome to the ATM Simulator!\n");

    do{
        displayMenu();
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            withdraw();
            break;
        case 2:
            deposit();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            printf("Thank you for using the ATM Simulator. Goodbye!\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    } while (option != 4);
    return 0;
}

void displayMenu()
{
    printf("\n");
    printf("1. Withdraw money\n");
    printf("2. Deposit money\n");
    printf("3. Check balance\n");
    printf("4. Exit\n");
}

void withdraw()
{
    int amount;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("Insufficient balance!\n");
    } else {
        balance -= amount;
        printf("Withdraw amount: %d\n", amount);
        printf("Remaining balance: %d\n", balance);
    }
}

void deposit()
{
    int amount;
    printf("Enter the amount to deposit: ");
    scanf("%d", &amount);

    balance += amount;
    printf("Deposit amount: %d\n", amount);
    printf("Total balance: %d\n", balance);
}

void checkBalance()
{
    printf("Your current balance is: %d\n", balance);
}
