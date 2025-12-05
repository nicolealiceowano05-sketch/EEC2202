//ENE212-0066/2024 Nicole Alice Owano
//ECE
//Simulation of ATM machine.
#include <stdio.h>
#include <stdlib.h>

const int correctpin = 1234;

int login()
{
    int userpin;
    printf("Enter your PIN: ");
    scanf("%d", &userpin);
    
    int counter = 0;
    while(userpin != correctpin && counter < 2) 
    {
        printf("Incorrect PIN. Try again: ");
        scanf("%d", &userpin);
        counter++;
    }

    if( userpin == correctpin ) 
    {
        printf("You have logged in successfully.\n");
        return 1;
    }
    else
    {
       printf("incorrect pin. Access denied.\n");
       return -1;
    }
    
}

void checkbalance(float *balance)
{
    printf("your current balance is: $%.2f\n", *balance);
}

int withdraw(float *balance)
{
    float amount;
    printf("enter the amount you want to withdraw:");
    scanf("%f", &amount);

    int counter = 0;
    while( amount > *balance && counter < 2 )
    {
        printf("your balance is %.2f,try again: ", *balance);
        scanf("%f", &amount);
        counter++;
    }

    if(amount <= *balance)
    {
        *balance -= amount;
        printf(" you have withdrawn : $%.2f\n", amount);
        return 2;
    }
    else
    {
        printf("withdrawal failed due to insufficient funds.\n");
        return -2;

    }
}

int deposit(float *balance)
{
    float amount;
    printf("enter the amount you want to deposit:");
    scanf("%f", &amount);

    if(amount > 0)
    {
        *balance += amount;
        printf(" you have deposited : $%.2f\n", amount);
        return 3;
    }
    else
    {
        printf("deposit failed due to invalid amount.\n");
        return -3;

    }
}



int main()
{
    float balance = 100000;
    float *pointer_balance = &balance;

    int loginstatus = login();
    while(loginstatus != 1) 
    {
        printf("_________MENU_________\n");
        printf("1. Retry Logging in.\n");
        printf("2. Exit\n");
        int choice;
        printf("enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            loginstatus = login();
        }
        else
        {
            printf("Exiting the program.\n");
            exit(1);
        }
    }

    while(1)
    {
        printf("_________MENU_________\n" );
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");

        int choice;
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                  checkbalance(pointer_balance);
                  break;

            case 2:
                   int status1;
                   status1 = withdraw(pointer_balance);
                     if(status1 == 2)  
                     {
                          checkbalance(pointer_balance);
                          printf("Withdrawal successful.\n");
                     } else 
                     {
                          printf("Withdrawal failed.\n");
                     }
                   break;

            case 3:
                   int status2;
                   status2 = deposit(pointer_balance);
                   if(status2 == 3)
                 {
                       checkbalance(pointer_balance);
                       printf("Deposit successful.\n");
                   } else 
                   {
                       printf("Deposit failed.\n");
                   }
                   break;

            case 4:
                   printf("Exiting the program.\n");
                   exit(0);
                   break;

            default:
                   printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}


