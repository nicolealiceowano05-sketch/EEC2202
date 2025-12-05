#include<stdio.h>
#include<stdlib.h>


int login()
{
    int correctpin = 1234;
    int userpin;
    printf("Enter your PIN: ");
    scanf("%d", &userpin);

    int digits = 0;
    while( userpin > 0 ) {
        userpin /= 10;
        digits++;
    }

    if (digits != 4) {
        printf("PIN must be 4 digits long.\n");
        return 2;
    }

    int counter = 0;
    while(userpin!= correctpin && counter < 2) 
    {
        printf("Incorrect PIN. Try again: ");
        scanf("%d", &userpin);
        counter++;
    }

    if(userpin == correctpin)
     {
        printf("Login successful!\n");
        return 1;
    } 
    
    else {
        printf("Incorrect PIN. Access denied.\n");
        return -1;
    }
}

void checkbalance(float *balance) {
    printf("Your current balance is: $%.2f\n", *balance);
    
}
int* deposit(float *balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if(amount > 0) {
        *balance += amount;
        printf("Deposited: $%.2f\n", amount);
    } else {
        printf("Invalid amount.\n");
    }
}

int *withdraw(float *balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if(amount > 0 && amount <= *balance) {
        *balance -= amount;
        printf("Withdrew: $%.2f\n", amount);
    } else {
        printf("Invalid amount or insufficient funds.\n");
    }
}

int main()
{

    int loginstatus = login();
    if(loginstatus == 1) {
        printf("login sucessful\n");
    }
    else{
        printf("login failed\n");
        
    }

    while(1)
    {
        printf("_________MENU_________" );
        printf("1. Check Balance\n");
        printf("2. deposit\n");
        printf("3. withdraw\n");
        printf("4. exit");

        int choice;
        printf("enter your choice");
        scanf("%d", &choice);

    
        int *Amount = 100000; // initial balance

        switch(choice){
            case 1:
                  checkbalance(balance);
                  break;

            case 2:
                   *Amount = deposit(balance);
                    break;

            case 3:
                    *Amount = withdraw(balance);
                    break;

            case 4:
                   printf("exiting....\n");
                   exit(0);

        }
    }
return 0;
        }
