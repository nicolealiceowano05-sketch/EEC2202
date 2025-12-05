#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, World!\n");

    int pin = 1234;
    int input;
    printf("Enter your PIN: ");
    scanf("%d", &input);

    int counter = 0;
    while (input != pin && counter < 2) {
        printf("Incorrect PIN. Try again: ");
        scanf("%d", &input);
        counter++;
    }

    if (input == pin) {
        printf("Access granted.\n");
    } else {
        printf("Access denied. Too many incorrect attempts.\n");
    }
    
    

    return 0;
}