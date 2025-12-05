#include <stdio.h>

int main() {

    char array[50];
    printf("enter a string:");
    fgets(array, sizeof(array), stdin);
    printf("you entered: %s\n", array);
    
    int counter =0;
    for(int i = 0; array[i] != '\0'; ++i)
    {
        ++counter;
    }
    printf("string length: %d", counter);

    return 0;

}