#include<stdio.h>
float deposit(float, float);
float withdraw(float, float);
void main()
{
    float balance, amount;
    int choice;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    printf("\n1. Deposit");
    printf("\n2. Withdraw");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if(choice == 1)
    {
        balance = deposit(balance, amount);
    }
    else if(choice == 2)
    {
        balance = withdraw(balance, amount);
    }
    else
    {
        printf("Invalid choice");
    }

    printf("\nUpdated Balance = %.2f", balance);
}

float deposit(float balance, float amount)
{
    balance = balance + amount;
    return balance;
}

float withdraw(float balance, float amount)
{
    if(balance < 3000)
    {
        printf("Can't withdraw, balance is not sufficient\n");
    }
    else
    {
        balance = balance - amount;
    }

    return balance;
}

